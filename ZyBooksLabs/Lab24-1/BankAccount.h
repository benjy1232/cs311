#ifndef BANKACCOUNTH
#define BANKACCOUNTH

#include <string>
using namespace std;

class BankAccount
{
  public:
    BankAccount(string newName, double amt1, double amt2);
    // Getters
    string GetName() const;
    double GetChecking() const;
    double GetSavings() const;
    // Setters
    void SetName(string Name);
    void SetChecking(double amt);
    void SetSavings(double amt);
    // Methods
    void DepositChecking(double amt);
    void DepositSavings(double amt);
    void WithdrawChecking(double amt);
    void WithdrawSavings(double amt);
    void TransferToSavings(double amt);

  private:
    string _customerName;
    double _savings;
    double _checking;
    // TODO: Declare private data members
};

#endif
