#ifndef BUDGETMGR_H
#define BUDGETMGR_H

#include "BudgetMgrIfc.h"

class BudgetMgr: public BudgetMgrIfc
{
public:
    BudgetMgr();
    virtual void SetAsExpense (double expense);
    virtual void SetAsIncome (double income);
    virtual double GetBudget();

    double TotalBudget;
};

#endif // BUDGETMGR_H
