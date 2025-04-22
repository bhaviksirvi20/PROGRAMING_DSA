#include <iostream>
#include <cmath> // For power function in FD
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
        cout << "Bank Account Info:" << endl;
        cout << "Account Number: " << accn << endl;
        cout << "Account Holder Name: " << accountholdername << endl;
        cout << "Balance: $ " << balance << endl
;
    }

    void deposit()
    {
        cout << "Deposit:" << endl;
        double depo;
        cout << "Enter amount to deposit: $ ";
        cin >> depo;
        balance += depo;
        cout << "New balance after deposit: $ " << balance << endl;
    }

    void withdraw()
    {
        cout << "Withdraw:" << endl;
        double withd;
        cout << "Enter amount to withdraw: $ ";
        cin >> withd;
        if (withd <= balance)
        {
            balance -= withd;
            cout << "New balance after withdrawal: $ " << balance << endl;

        }
        else
        {
            cout << "Insufficient balance!" << endl;

        }
    }

    void getbalance()
    {
        cout << "Current Balance: $ " << balance << endl;
    }

    double getBalance()
    {
        return balance;
    }
};

class SavingAccount : public Bankaccount
{
public:
    void InterestRate()
    {
        double rate;
        cout << "Saving Account:" << endl;
        cout << "Enter the Interest Rate (%): ";
        cin >> rate;
        double interest = balance * (rate / 100);
        cout << "Interest Earned: $ " << interest << endl;
        balance += interest;
        cout << "New balance after interest: $ " << balance << endl;
    }

    void fixedDeposit()
    {
        double fdAmount, rate = 5, time;
        cout << "Fixed Deposit:" << endl;
        cout << "Enter Interest Rate: " << rate << " (%)" << endl;
        cout << "Enter FD Amount: $ ";
        cin >> fdAmount;
        cout << "Enter Time Period (months): ";
        cin >> time;

        double years = time / 12;
        double maturityAmount = fdAmount * pow((1 + rate / 100), years);

        cout << "Maturity Amount after " << time << " months: $ " << maturityAmount << endl;
    }
};

class CheckingAccount : public Bankaccount
{
public:
    void OverDraftLimit()
    {
        double user;
        double overdraftLimit = 40000;

        cout << "Overdraft Limit:" << endl;
        cout << "Enter required amount (Max Overdraft Limit: $ " << overdraftLimit << "): $ ";
        cin >> user;

        if (user <= balance)
        {
            cout << "Sufficient balance available." << endl;
        }
        else if (user <= balance + overdraftLimit)
        {
            cout << "Overdraft allowed. Overdraft used: $ " << (user - balance) << endl;
        }
        else
        {
            cout << "Overdraft limit exceeded!" << endl;
        }
      
    }
};

int main()
{
    SavingAccount bank;
    CheckingAccount checkingAccount;

    bank.set(235486, "Mehul Bhai", 500000); 

    int choice;

    do
    {
        cout << "Bank Menu:" << endl;
        cout << "1. View Account Info" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. View Current Balance" << endl;
        cout << "5. Calculate Interest (Saving Account)" << endl;
        cout << "6. Overdraft Limit (Checking Account)" << endl;
        cout << "7. Fixed Deposit" << endl;
        cout << "8. Exit" << endl;
        cout << "----------------------------------------------------" << endl;
        cout << "Enter your choice (1-8): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            bank.get();
            break;
        case 2:
            bank.deposit();
            break;
        case 3:
            bank.withdraw();
            break;
        case 4:
            bank.getbalance();
            break;
        case 5:
            bank.InterestRate();
            break;
        case 6:
            checkingAccount.set(235486, "Mehul Bhai", bank.getBalance());
            checkingAccount.OverDraftLimit();
            break;
        case 7:
            bank.fixedDeposit();
            break;
        case 8:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice, please try again enter the ( 1 to 8 )..." << endl;
            break;
        }

        cout << "----------------------------------------------------" << endl;
    } while (choice != 8);

    return 0;
}
