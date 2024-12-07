#ifndef BUDGETMGRIFC_H
#define BUDGETMGRIFC_H

class BudgetMgrIfc
{
public:
    BudgetMgrIfc();
    virtual void SetAsExpense (double expense) = 0;
    virtual void SetAsIncome (double income) = 0;
    virtual double GetBudget() = 0;
};

#endif // BUDGETMGRIFC_H
