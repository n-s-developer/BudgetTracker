#ifndef UIOBSERVERCLS_H
#define UIOBSERVERCLS_H

#include "ObserverIfc.h"

class UIObserverCls: public ObserverIfc
{
public:
    UIObserverCls();

    void UpdateBalance(double balance) override;
};

#endif // UIOBSERVERCLS_H
