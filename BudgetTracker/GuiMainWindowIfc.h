#ifndef GUIMAINWINDOWIFC_H
#define GUIMAINWINDOWIFC_H

class GuiMainWindowIfc
{
public:
    GuiMainWindowIfc();
    virtual void SetErrorMsg(int hataNumber) = 0;
};

#endif // GUIMAINWINDOWIFC_H
