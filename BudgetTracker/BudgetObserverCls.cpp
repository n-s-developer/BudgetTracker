#include "BudgetObserverCls.h"

BudgetObserverCls::BudgetObserverCls() {}

void BudgetObserverCls::UpdateBalance(double balance)
{
    // set Gui Label
    // ui->labelBalance->setText(QString::number(balance));
}


void BudgetObserverCls::SetupBudget(BudgetMgrCls* budget)
{
    budget->AddObserver(this);  // Observer olarak ekle
}
