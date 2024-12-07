#ifndef GUIMGR_H
#define GUIMGR_H

#include <QString>

#include "BudgetMgrIfc.h"
#include "BudgetMgr.h"

#include "GuiMgrIfc.h"

class GuiMgr: public GuiMgrIfc
{
public:
    GuiMgr();
    virtual void SetAsExpense (QString expense);
    virtual void SetAsIncome (QString income);
    virtual QString GetBudget();

private:
    BudgetMgrIfc* BudgetPtr = new BudgetMgr();

    double ConvertQStringToDouble(QString string);
    QString ConvertDoubleToQString(double value);
};

#endif // GUIMGR_H
