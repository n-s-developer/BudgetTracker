#ifndef BUDGETMGRCLS_H
#define BUDGETMGRCLS_H

#include "BudgetMgrIfc.h"

class BudgetMgrCls: public BudgetMgrIfc
{
public:
    BudgetMgrCls();
    virtual void SetAsExpense (double expense);
    virtual void SetAsIncome (double income);
    virtual double GetBudget();
    virtual void ResetBudget();

    double TotalBudget;
};

#endif // BUDGETMGRCLS_H
