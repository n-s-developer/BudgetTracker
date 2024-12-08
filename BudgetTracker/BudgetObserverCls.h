#ifndef BUDGETOBSERVERCLS_H
#define BUDGETOBSERVERCLS_H

#include <ObserverIfc.h>
#include <BudgetMgrCls.h>

class BudgetObserverCls : public ObserverIfc
{
public:
    BudgetObserverCls();
    void UpdateBalance(double balance) override;
    void SetupBudget(BudgetMgrCls* budget);
};

#endif // BUDGETOBSERVERCLS_H
