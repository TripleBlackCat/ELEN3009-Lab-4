#include "Commission.h"

CommissionWorker::CommissionWorker (const string& first_name, const string& surname,
							 double base_weekly_salary, double items_sold_per_week, double commission_per_item)
							: Employee(first_name, surname),  // call base-class constructor
							  _base_weekly_salary(base_weekly_salary),
							  _items_sold_per_week(items_sold_per_week),
                              _commission_per_item(commission_per_item)
{
    
};

double CommissionWorker::earnings() const
{
    return (_base_weekly_salary + (_items_sold_per_week*_commission_per_item));
}

void CommissionWorker::print() const
{
    cout << "Commission worker: ";
   // re-use Employee's print function (DRY principle)
   Employee::print();
}

