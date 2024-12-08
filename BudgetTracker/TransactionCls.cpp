#include "TransactionCls.h"

TransactionCls::TransactionCls()
{

}

TransactionCls::TransactionCls(double amount, const QString& description) : Amount(amount), Description(description)
{

}

double TransactionCls::GetAmount() const {
    return Amount;
}

QString TransactionCls::GetDescription() const {
    return Description;
}
