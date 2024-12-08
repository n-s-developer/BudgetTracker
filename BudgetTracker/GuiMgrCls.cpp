#include "GuiMgrCls.h"

GuiMgrCls::GuiMgrCls() {}

void GuiMgrCls::SetAsExpense (QString expense)
{
    double input = ConvertQStringToDouble(expense);
    BudgetPtr->SetAsExpense(input);
}

void GuiMgrCls::SetAsIncome (QString income)
{
    double input = ConvertQStringToDouble(income);
    BudgetPtr->SetAsIncome(input);
}

QString GuiMgrCls::GetBudget()
{
    QString str = QString::number(BudgetPtr->GetBudget());
    return str;
}

double GuiMgrCls::ConvertQStringToDouble(QString string)
{
    bool ok;
    double value = string.toDouble(&ok);

    if (ok) {
        return value;
    } else {
        return 0;
    }
}

QString GuiMgrCls::ConvertDoubleToQString(double input)
{
    QString str = QString::number(input);

    return str;
}
