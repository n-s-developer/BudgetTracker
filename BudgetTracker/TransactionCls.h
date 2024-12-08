#ifndef TRANSACTIONCLS_H
#define TRANSACTIONCLS_H

#include <QString>

class TransactionCls
{
public:
    TransactionCls();
    TransactionCls(double amount, const QString& description);

    double GetAmount() const;
    QString GetDescription() const;

protected:
    double Amount;
    QString Description;
};

#endif // TRANSACTIONCLS_H
