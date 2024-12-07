#ifndef GUIMGRIFC_H
#define GUIMGRIFC_H

class GuiMgrIfc
{
public:
    GuiMgrIfc();
    virtual void SetAsExpense (double expense) = 0;
    virtual void SetAsIncome (double income) = 0;
    virtual double GetBudget() = 0;
};

#endif // GUIMGRIFC_H
