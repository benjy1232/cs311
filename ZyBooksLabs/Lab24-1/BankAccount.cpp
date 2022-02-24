#include "BankAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount(string newName, double amt1, double amt2)
{
    _customerName = newName;
    _checking = amt1;
    _savings = amt2;
}
// Getters
string BankAccount::GetName() const
{
    return _customerName;
}
double BankAccount::GetChecking() const
{
    return _checking;
}
double BankAccount::GetSavings() const
{
    return _savings;
}
// Setters
void BankAccount::SetName(string Name)
{
    _customerName = Name;
}
void BankAccount::SetChecking(double amt)
{
    _checking = amt;
}
void BankAccount::SetSavings(double amt)
{
    _savings = amt;
}
// Methods
void BankAccount::DepositChecking(double amt)
{
    if (amt > 0)
    {
        _checking += amt;
    }
}

void BankAccount::DepositSavings(double amt)
{
    if (amt > 0)
    {
        _savings += amt;
    }
}

void BankAccount::WithdrawChecking(double amt)
{
    if (amt > 0)
    {
        _checking -= amt;
    }
}

void BankAccount::WithdrawSavings(double amt)
{
    if (amt > 0)
    {
        _savings -= amt;
    }
}

void BankAccount::TransferToSavings(double amt)
{
    if (_checking > 0)
    {
        _checking -= amt;
        _savings += amt;
    }
}
