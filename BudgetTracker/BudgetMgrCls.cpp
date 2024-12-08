#include "BudgetMgrCls.h"

BudgetMgrCls::BudgetMgrCls() {}

void BudgetMgrCls::AddObserver(ObserverIfc* observer)
{
    // Vector'ün sonuna yeni eleman ekleme
    ObserversArr.push_back(observer);
}

void BudgetMgrCls::RemoveObserver(ObserverIfc* observer)
{
    // Vector işlemleri:
    // remove: verilen ögeyi vectörün sonuna taşır. Ancak gerçek silme yapılmaz.
    // Vector boyutu değişmez.
    // erase: gerçeketen silme işlemi gerçekleştirilir.
    ObserversArr.erase(std::remove(ObserversArr.begin(),
                                ObserversArr.end(),
                                observer),
                    ObserversArr.end());
}

void BudgetMgrCls::NotifyObservers()
{
    // Auto tip seçimi ile okunabilirlik ve tanımlama hataları engelleniyor.
    // alternatif kullanım: for (ObserverIfc* observer : observers)

    // For ile observer vectörü içindeki tüm elemanların ilgili fonksiyonları
    // çağırılıyor.
    for (auto observer : ObserversArr) {
        observer->UpdateBalance(Balance);
    }
}

void BudgetMgrCls::SetIncome(double income)
{
    Income = income;
    CalculateBalance();
    NotifyObservers();
}

void BudgetMgrCls::SetExpense(double expense)
{
    Expense = expense;
    CalculateBalance();
    NotifyObservers();
}

void BudgetMgrCls::CalculateBalance()
{
    Balance = Income - Expense;
}
