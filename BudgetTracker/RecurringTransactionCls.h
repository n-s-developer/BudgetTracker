#ifndef RECURRINGTRANSACTIONCLS_H
#define RECURRINGTRANSACTIONCLS_H

#include <TransactionCls.h>
#include <QDate>

class RecurringTransactionCls: public TransactionCls
{
public:
    RecurringTransactionCls();
    void CalculateNextDate();

    int RecurrenceInterval;
    QDate NextDate;
};

#endif // RECURRINGTRANSACTIONCLS_H
