#include "GuiMgr.h"

GuiMgr::GuiMgr() {}

void GuiMgr::SetAsExpense (QString expense)
{
    double input = ConvertQStringToDouble(expense);
    BudgetPtr->SetAsExpense(input);
}

void GuiMgr::SetAsIncome (QString income)
{
    double input = ConvertQStringToDouble(income);
    BudgetPtr->SetAsIncome(input);
}

QString GuiMgr::GetBudget()
{
    QString str = QString::number(BudgetPtr->GetBudget());
    return str;
}

double GuiMgr::ConvertQStringToDouble(QString string)
{
    bool ok;
    double value = string.toDouble(&ok);

    if (ok) {
        return value;
    } else {
        return 0;
    }
}

QString GuiMgr::ConvertDoubleToQString(double input)
{
    QString str = QString::number(input);

    return str;
}
