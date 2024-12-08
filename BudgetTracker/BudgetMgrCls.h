#ifndef BUDGETMGRCLS_H
#define BUDGETMGRCLS_H

#include <vector>
#include "BudgetMgrIfc.h"
#include <ObserverIfc.h>
#include <algorithm>

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

    void SetIncome(double balance);
    void SetExpense(double balance);
    void CalculateBalance();

};

#endif // BUDGETMGRCLS_H
