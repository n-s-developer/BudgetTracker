#include "TransactionFactoryCls.h"

TransactionFactoryCls::TransactionFactoryCls() {}

TransactionCls* TransactionFactoryCls::CreateTransaction(const QString& type, double amount, const QString& description)
{
    if (type == "normal") {
        return new TransactionCls(amount, description);
    } else if (type == "recurring") {
        return nullptr; // Recurring transactions are handled separately
    }
    return nullptr;
}

RecurringTransactionCls* TransactionFactoryCls::CreateRecurringTransaction(double amount, const QString& description, int interval)
{
    return new RecurringTransactionCls(amount, description, interval);
}
