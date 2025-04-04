#include <iostream>
using namespace std;

class Bankaccount
{
private:
    double accn;
    string accountholdername;

protected:
    double balance;

public:
    void set(double accn, string accountholdername, double balance)
    {
        this->accn = accn;
        this->accountholdername = accountholdername;
        this->balance = balance;
    }

    void get()
    {
        cout << "----------------Bank Account------------------" << endl;
        cout << "| Account Number : " << accn << endl;
        cout << "| Account Holder Name : " << accountholdername << endl;
        cout << "| Balance : $ " << balance << endl;
        cout << "----------------------------------------------" << endl
             << endl;
    }

    void deposite()
    {
        cout << "-------------------Deposit-------------------" << endl;
        double depo;
        cout << "| Enter amount to deposit: ";
        cin >> depo;
        balance += depo; // Update balance correctly
        cout << "| Updated Balance: $ " << balance << endl;
        cout << "----------------------------------------------" << endl
             << endl;
    }

    void withdrow()
    {
        cout << "-------------------Withdraw-------------------" << endl;
        double withd;
        cout << "| Enter amount to withdraw: ";
        cin >> withd;
        if (withd > balance)
        {
            cout << "| Insufficient balance!" << endl;
        }
        else
        {
            balance -= withd; // Update balance correctly
            cout << "| Updated Balance: $ " << balance << endl;
        }
        cout << "----------------------------------------------" << endl
             << endl;
    }

    void getbalance()
    {
        cout << "----------------Current Balance---------------" << endl;
        cout << "| Current Balance: $ " << balance << endl;
        cout << "----------------------------------------------" << endl
             << endl;
    }

    void displayaccountinfo()
    {
        cout << "----------------Account Details----------------" << endl;
        cout << "| Account Number: " << accn << endl;
        cout << "| Account Holder Name: " << accountholdername << endl;
        cout << "| Balance: $ " << balance << endl;
        cout << "----------------------------------------------" << endl
             << endl;
    }
};

// 🔹 SavingAccount inherits from Bankaccount
class SavingAccount : public Bankaccount
{
public:
    void InterestRate()
    {
        double rate;
        cout << "----------------Saving Account----------------" << endl;
        cout << "| Enter the Interest Rate (%): ";
        cin >> rate;
        double interest = balance * (rate / 100);
        cout << "| Interest Earned: $" << interest << endl;
        cout << "----------------------------------------------" << endl
             << endl;
    }
};

// 🔹 CheckingAccount inherits from SavingAccount (Multi-level Inheritance)
class CheckingAccount : public SavingAccount
{
public:
    void OverDraftLimit()
    {
        double overdraftLimit;
        cout << "---------------Overdraft Limit---------------" << endl;
        cout << "| Enter overdraft limit: ";
        cin >> overdraftLimit;

        if (balance < overdraftLimit)
        {
            cout << "| You can avail overdraft up to: $" << overdraftLimit << endl;
        }
        else
        {
            cout << "| Sufficient balance, overdraft not required." << endl;
        }
        cout << "----------------------------------------------" << endl
             << endl;
    }
};

int main()
{
    // 🔹 Create CheckingAccount object (inherits everything)
    CheckingAccount bank;

    bank.set(235486, "Mehul Bhai", 500000);
    bank.get();
    bank.deposite();
    bank.withdrow();
    bank.getbalance();
    bank.displayaccountinfo();

    // 🔹 SavingAccount Functions
    bank.InterestRate();

    // 🔹 CheckingAccount Overdraft Function
    bank.OverDraftLimit();

    return 0;
}
