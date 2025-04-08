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
        balance += depo; // Correct balance update
        cout << "| Current balance after deposit : $ " << balance << endl;
        cout << "----------------------------------------------" << endl
             << endl;
    }

    void withdrow()
    {
        cout << "-------------------Withdraw-------------------" << endl;
        double withd;
        cout << "| Withdraw funds from the account : ";
        cin >> withd;

        if (withd > balance)
        {
            cout << "| Insufficient funds. Your balance is $ " << balance << endl;
        }
        else
        {
            balance -= withd; // Correct balance update
            cout << "| Current balance after withdrawal : $ " << balance << endl;
        }
        cout << "----------------------------------------------" << endl
             << endl;
    }

    void getbalance()
    {
        cout << "----------------Current Balance---------------" << endl;
        cout << "| Current Balance : $ " << balance << endl; // Correct reference to balance
        cout << "----------------------------------------------" << endl
             << endl;

    }
    double getbalance(){
        return balance;
    }

    void displayaccountinfo()
    {
        cout << "----------------Account Detail----------------" << endl;
        cout << "| Account Number : " << accn << endl;
        cout << "| Account Holder Name : " << accountholdername << endl;
        cout << "| Balance : $ " << balance << endl; // Correct reference to balance
        cout << "----------------------------------------------" << endl
             << endl;
    }
};

class SavingAccount : public Bankaccount
{
public:
    void InterestRate()
    {
        double rate = 6;
        
        cout << "----------------Saving Account----------------" << endl;
        cout << "| Enter the Interest Rate (%): 6 " << endl;
        
        double interest = balance * (rate / 100);
        
        cout << "| Interest: $ " << interest << endl;
        double RateAmount =  interest + balance ;
        cout << "| interest + balance = total: $ " << interest + balance << endl;
        cout << "----------------------------------------------" << endl
             << endl;
    }
  
};

class CheckingAccount : public Bankaccount 
{
public:
  void OverDraftLimit()
    {   
      

        cout << "----------------Over Draft Limit---------------" << endl;
   
        cout << " asaasd : " <<balance<< endl;
     

}
    
};



int main()
{
    SavingAccount bank;

    bank.set(235486, "Mehul Bhai", 50000);
    bank.get();
    bank.deposite();
    bank.withdrow();
    bank.getbalance();
    bank.displayaccountinfo();
    bank.InterestRate();
    
    CheckingAccount banks;

    banks.getbalance();
    banks.OverDraftLimit();
    
}
