#ifndef TRANSACTIONFACTORYCLS_H
#define TRANSACTIONFACTORYCLS_H

#include "TransactionCls.h"
#include "RecurringTransactionCls.h"

class TransactionFactoryCls
{
public:
    TransactionFactoryCls();

    static TransactionCls* CreateTransaction(const QString& type, double amount, const QString& description);
    static RecurringTransactionCls* CreateRecurringTransaction(double amount, const QString& description, int interval);

};

#endif // TRANSACTIONFACTORYCLS_H
