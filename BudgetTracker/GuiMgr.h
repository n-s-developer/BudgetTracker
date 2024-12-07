#ifndef GUIMGR_H
#define GUIMGR_H

#include "BudgetMgrIfc.h"
#include "BudgetMgr.h"

#include "GuiMgrIfc.h"

class GuiMgr: public GuiMgrIfc
{
public:
    GuiMgr();
    virtual void SetAsExpense (double expense);
    virtual void SetAsIncome (double income);
    virtual double GetBudget();

private:
    BudgetMgrIfc* BudgetPtr = new BudgetMgr();
};

#endif // GUIMGR_H
