#ifndef BUDGETOBSERVERCLS_H
#define BUDGETOBSERVERCLS_H

#include "ObserverIfc.h"

class BudgetObserverCls : public ObserverIfc
{
public:
    BudgetObserverCls();
    void UpdateBalance(double balance) override;
};

#endif // BUDGETOBSERVERCLS_H
