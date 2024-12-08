#ifndef TRANSACTIONCLS_H
#define TRANSACTIONCLS_H

#include <QString>

class TransactionCls
{
public:
    TransactionCls();
    QString GetDetails();

    QString Description;
    double Amount;
    QString Type;
};

#endif // TRANSACTIONCLS_H
