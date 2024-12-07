#include "GuiMgr.h"

GuiMgr::GuiMgr() {}

void GuiMgr::SetAsExpense (double expense)
{
    BudgetPtr->SetAsExpense(expense);
}

void GuiMgr::SetAsIncome (double income)
{
    BudgetPtr->SetAsExpense(income);
}

double GuiMgr::GetBudget()
{
    return BudgetPtr->GetBudget();
}
