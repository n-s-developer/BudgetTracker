#ifndef GUIMGRCLS_H
#define GUIMGRCLS_H

#include <QString>

#include "BudgetMgrIfc.h"
#include "BudgetMgrCls.h"

#include "GuiMgrIfc.h"

class GuiMgrCls: public GuiMgrIfc
{
public:
    GuiMgrCls();
    virtual void SetAsExpense (QString expense);
    virtual void SetAsIncome (QString income);
    virtual QString GetBudget();

private:
    BudgetMgrIfc* BudgetPtr = new BudgetMgrCls();

    double ConvertQStringToDouble(QString string);
    QString ConvertDoubleToQString(double value);
};

#endif // GUIMGRCLS_H
