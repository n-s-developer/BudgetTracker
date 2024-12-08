#ifndef BUDGETMGRCLS_H
#define BUDGETMGRCLS_H

#include "BudgetMgrIfc.h"

class BudgetMgrCls
{
public:
    BudgetMgrCls();
    void calculateBalance();
    void ResetBudget();

    double Income;
    double Expense;
    double Balance;
};

#endif // BUDGETMGRCLS_H
