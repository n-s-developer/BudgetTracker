#ifndef RECURRINGTRANSACTIONCLS_H
#define RECURRINGTRANSACTIONCLS_H

#include <TransactionCls.h>
#include <QDate>

class RecurringTransactionCls: public TransactionCls
{
public:
    RecurringTransactionCls();
    RecurringTransactionCls(double amount, const QString& description, int interval);

    int GetInterval() const;

private:
    int Interval;
};

#endif // RECURRINGTRANSACTIONCLS_H
