#include "BudgetMgr.h"

BudgetMgr::BudgetMgr() {}

void BudgetMgr::SetAsExpense (double expense)
{
    TotalBudget -= expense;
}

void BudgetMgr::SetAsIncome (double income)
{
    TotalBudget += income;
}

double BudgetMgr::GetBudget()
{
    return TotalBudget;
}

void BudgetMgr::ResetBudget()
{
    TotalBudget = 0;
}
