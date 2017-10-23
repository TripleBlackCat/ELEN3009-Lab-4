#include "Employee.h"
#include "hourly.h"
#include "Fixed.h"
#include "Commission.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>

#include <memory>
using std::shared_ptr;
using std::make_shared;

#include <iomanip>
using std::setiosflags;
using std::setprecision;
using std::ios;

#include <iostream>
using std::endl;
using std::cout;

#include <vector>
using std::vector;

double totalEmployeeWages(vector<shared_ptr<Employee>> employees)
{
    double totalWages = 0.0;
    
    for (auto employee : employees)
    {
        totalWages = totalWages + employee->earnings();
    }
    
    return totalWages;
}

TEST_CASE("Calculate total wages of employees with three different types")
{
    double base_weekly_salary = 2000.0;
    double items_sold_per_week = 10.0;
    double commission_per_item = 50.0;
    shared_ptr<CommissionWorker> commission_ptr = make_shared<CommissionWorker>("Jordan", "Belfort", base_weekly_salary, items_sold_per_week, commission_per_item);
    
    double weekly_salary = 905.0;
    shared_ptr<FixedRateWorker> fixed_rate_ptr = make_shared<FixedRateWorker>("Ted", "Mosby", weekly_salary);
    
    double wage = 12.0;
    double weekly_hours = 52;
	shared_ptr<HourlyWorker> hourly_ptr = make_shared<HourlyWorker>("Barney", "Stinson", wage, weekly_hours);
    
    vector<shared_ptr<Employee>> employees;
    employees.push_back(commission_ptr);
    employees.push_back(fixed_rate_ptr);
    employees.push_back(hourly_ptr);
    
	CHECK(totalEmployeeWages(employees) == 4101.0);
} 
