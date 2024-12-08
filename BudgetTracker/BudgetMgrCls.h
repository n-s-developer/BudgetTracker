#ifndef BUDGETMGRCLS_H
#define BUDGETMGRCLS_H

#include <vector>
#include <algorithm>

#include "ObserverIfc.h"
#include "UIObserverCls.h"
#include "BudgetObserverCls.h"

class BudgetMgrCls
{
private:
    std::vector<ObserverIfc*> ObserversArr;

    double Income;
    double Expense;
    double Balance;

public:
    BudgetMgrCls();

    // Observer operations

    // ObserverArr içerisine yeni observer ekler.
    void AddObserver(ObserverIfc* observer);

    // ObserverArr içerisinden observer siler.
    void RemoveObserver(ObserverIfc* observer);

    // ObserverArr içerisindeki elemanlare bildirim gönderir.
    void NotifyObservers();

    void SetupBudget();

    void SetIncome(double balance);
    void SetExpense(double balance);
    void CalculateBalance();
    void ResetBudget();

};

#endif // BUDGETMGRCLS_H
