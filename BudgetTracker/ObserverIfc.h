#ifndef OBSERVERIFC_H
#define OBSERVERIFC_H


class ObserverIfc
{
public:
    ObserverIfc();
    virtual void UpdateBalance(double balance) = 0;
};

#endif // OBSERVERIFC_H
