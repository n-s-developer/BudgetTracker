#ifndef GUIMGRIFC_H
#define GUIMGRIFC_H

#include <QString>

class GuiMgrIfc
{
public:
    GuiMgrIfc();
    virtual void SetAsExpense (QString expense) = 0;
    virtual void SetAsIncome (QString income) = 0;
    virtual QString GetBudget() = 0;
};

#endif // GUIMGRIFC_H
