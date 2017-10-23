#include "Employee.h"
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


TEST_CASE("Correct earnings are calculated and returned when using constructor")
{
    double base_weekly_salary = 2000.0;
    double items_sold_per_week = 10.0;
    double commission_per_item = 50.0;
    
    shared_ptr<CommissionWorker> commission_ptr = make_shared<CommissionWorker>("Jordan", "Belfort", base_weekly_salary, items_sold_per_week, commission_per_item);
    
	CHECK(commission_ptr->earnings() == 2500.0);
} 

TEST_CASE("Base salary can be edited with a function")
{
    double base_weekly_salary = 2000.0;
    double items_sold_per_week = 10.0;
    double commission_per_item = 50.0;
    
    shared_ptr<CommissionWorker> commission_ptr = make_shared<CommissionWorker>("Jordan", "Belfort", base_weekly_salary, items_sold_per_week, commission_per_item);
    commission_ptr->setBaseWeeklySalary(3000);
    
	CHECK(commission_ptr->earnings() == 3500);
} 

TEST_CASE("Items sold per week can be edited with a function")
{
    double base_weekly_salary = 2000.0;
    double items_sold_per_week = 10.0;
    double commission_per_item = 50.0;
    
    shared_ptr<CommissionWorker> commission_ptr = make_shared<CommissionWorker>("Jordan", "Belfort", base_weekly_salary, items_sold_per_week, commission_per_item);
    commission_ptr->setItemsSoldPerWeek(21);
    
	CHECK(commission_ptr->earnings() == 3050);
} 

TEST_CASE("Commission rate can be edited with a function")
{
    double base_weekly_salary = 2000.0;
    double items_sold_per_week = 10.0;
    double commission_per_item = 50.0;
    
    shared_ptr<CommissionWorker> commission_ptr = make_shared<CommissionWorker>("Jordan", "Belfort", base_weekly_salary, items_sold_per_week, commission_per_item);
    commission_ptr->setCommissionPerItem(100);
    
	CHECK(commission_ptr->earnings() == 3000);
} 

