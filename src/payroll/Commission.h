// Definition of class HourlyWorker
#ifndef COMMISSION_H
#define COMMISSION_H
#include "employee.h"

class CommissionWorker : public Employee {
public:
    CommissionWorker(const string& first_name, const string& surname, 
	   double base_weekly_salary = 0.0, double items_sold_per_week = 0.0, double commission_per_item = 0.0);
  
        void setBaseWeeklySalary(double base_weekly_salary) { _base_weekly_salary = base_weekly_salary; };
        void setItemsSoldPerWeek(double items_sold_per_week) { _items_sold_per_week = items_sold_per_week; };
        void setCommissionPerItem(double commission_per_item) {_commission_per_item = commission_per_item; };
        virtual double earnings() const override;
        virtual void print() const;

    private:
        double _base_weekly_salary; 
        double _items_sold_per_week;
        double _commission_per_item; 
};

#endif
