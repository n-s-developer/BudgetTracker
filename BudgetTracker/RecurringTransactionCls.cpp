#include "RecurringTransactionCls.h"

RecurringTransactionCls::RecurringTransactionCls()
{

}

RecurringTransactionCls::RecurringTransactionCls(double amount, const QString& description, int interval)
    : TransactionCls(amount, description), Interval(interval)
{

}

int RecurringTransactionCls::GetInterval() const {
    return Interval;
}
