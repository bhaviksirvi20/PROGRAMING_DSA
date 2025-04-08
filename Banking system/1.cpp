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
        cout << "-------------------Deposite-------------------" << endl;
        double depo;
        cout << "| Adds funds to the account : ";
        cin >> depo;
        depo += balance + depo;
        cout << "| add deposite currant balance : $ " << depo << endl;
        cout << "----------------------------------------------" << endl
             << endl;
    }

    void withdrow()
    {
        cout << "-------------------Withdraw-------------------" << endl;
        double withd;
        cout << "| withdraws funds to the account : ";
        cin >> withd;
        withd = balance - withd;
        cout << "| after withdraw currant balance : $ " << withd << endl;
        cout << "----------------------------------------------" << endl
             << endl;
    }
    void getbalance()
    {
        double withd;
        cout << "----------------Currant Balance---------------" << endl;
        cout << "| Current Balance : $ " << withd << endl;
        cout << "----------------------------------------------" << endl
             << endl;
    }
    void displayaccountinfo()
    {
        double withd;
        cout << "----------------Account Ditail----------------" << endl;
        cout << "| Account Number : " << accn << endl;
        cout << "| Account Holder Name : " << accountholdername << endl;
        cout << "| Balance : $ " << withd << endl;
        cout << "----------------------------------------------" << endl
             << endl;
    }

};
class SavingAccount : public Bankaccount
{
    public:
    void InterestRate()
    {
        
        double rate;
        cout << "----------------Saving Account----------------" << endl;
        cout << "| Enter the InterestRate : ";
        cin >> rate;
        double withd = withd * (rate / 100);
        cout << "| InterestRate (%): " << withd << endl;
        cout << "----------------------------------------------" << endl
             << endl;
    }
   
};
class CheckingAccount : public Bankaccount
{
    public:
    
 void OverDraftLimit()
    {
        double withd;
        double user;
        cout << "---------------Over Draft Limit---------------" << endl;
        double overlimit = 40000;
                
        
        double total = withd + user;
        cin >> total;
        
        cout << "Enter your amount : ";
        cin >> user;

        if (withd <= user)
        {
            cout << "you can avail overdraft : " << user << endl;
        }
        else
        {
            cout << "If you already have the money you need in your account, you don't need to take an overdraft from the bank" << endl;
        }
        cout << "----------------------------------------------" << endl
             << endl;
    }
};
int main()
{
    SavingAccount bank;

    bank.set(235486, "Mehul Bhai", 500000);
    bank.get();
    bank.deposite();
    bank.withdrow();
    bank.getbalance();
    bank.displayaccountinfo();
    
    bank.InterestRate();
    
    CheckingAccount banks;
    banks.OverDraftLimit();
    
}





// class Fixed DepositAccount : public Bankaccount
// {
//     public:
    
//  void term()
//     {
//         double withd;
//         double user;
//         cout << "---------------Over Draft Limit---------------" << endl;
//         cout << "Enter your amount : ";
//         cin >> user;
//         if (withd <= user)
//         {
//             cout << "you can avail overdraft : " << user << endl;
//         }
//         else
//         {
//             cout << "If you already have the money you need in your account, you don't need to take an overdraft from the bank" << endl;
//         }
//         cout << "----------------------------------------------" << endl
//              << endl;
//     }
// };
//  public:
//     void InterestRate()
//     {
        
//         double rate;
//         cout << "----------------Saving Account----------------" << endl;
//         cout << "| Enter the InterestRate : ";
//         cin >> rate;
//         double withd = withd * (rate / 100);
//         cout << "| InterestRate (%): " << withd << endl;
//         cout << "----------------------------------------------" << endl
//              << endl;
//     }


