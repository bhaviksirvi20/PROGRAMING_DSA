<<<<<<< HEAD
#include <iostream>
#include <cmath> // For power function in FD
=======
#include<iostream>
>>>>>>> e0be40b (Update 1.cpp)
using namespace std;

class Bank {
protected:
    int accNo;
    string holderName;
    double currentBalance;

public:
<<<<<<< HEAD
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
=======
    void setAccountInfo(int accNo, string holderName, double currentBalance) {
        this->accNo = accNo;
        this->holderName = holderName;
        this->currentBalance = currentBalance;

        cout << "Account ID : " << accNo << endl;
        cout << "Holder : " << holderName << endl;
        cout << "Opening Balance : ₹" << currentBalance << endl;
        cout << "------------------------------------------------------" << endl;
    }

    void addMoney(int amt) {
        if (amt >= 0) {
            currentBalance += amt;
            cout << "Amount Added : ₹" << amt << endl;
            cout << "Available Balance : ₹" << currentBalance << endl;
        } else {
            cout << "Invalid Deposit Attempt!" << endl;
        }
        cout << "------------------------------------------------------" << endl;
    }

    void withdrawMoney(double amt) {
        if (amt <= currentBalance) {
            currentBalance -= amt;
            cout << "Amount Withdrawn : ₹" << amt << endl;
            cout << "Remaining Balance : ₹" << currentBalance << endl;
        } else {
            cout << "Insufficient Balance to Withdraw!" << endl;
        }
        cout << "------------------------------------------------------" << endl;
    }

    double checkBalance() {
        return currentBalance;
    }

    void showDetails() {
        cout << "Account ID : " << this->accNo << endl;
        cout << "Holder : " << this->holderName << endl;
        cout << "Current Balance : ₹" << this->currentBalance << endl;
    }
};

class Savings : public Bank {
public:
    double rateOfInterest;

    void addInterest(double rateOfInterest) {
        double interest = (checkBalance() * rateOfInterest) / 100;
        currentBalance += interest;
        cout << "Interest Rate Applied: " << rateOfInterest << "%" << endl;
        cout << "Interest Amount: ₹" << interest << endl;
        cout << "Updated Balance: ₹" << currentBalance << endl;
        cout << "------------------------------------------------------" << endl;
    }
};

class Current : public Bank {
public:
    int odLimit;

    void overdraftService(int requestAmt, int odLimit) {
        this->odLimit = odLimit;
        if (requestAmt <= checkBalance() + odLimit) {
            double extra = requestAmt - checkBalance();
            cout << "OD Usage: ₹" << (extra > 0 ? extra : 0) << endl;
        } else {
            cout << "Overdraft Limit Exceeded!" << endl;
        }
        cout << "------------------------------------------------------" << endl;
    }
};

class FixedDeposit : public Bank {
public:
    double duration;

    void calculateFDInterest(double roi, int amt, double duration) {
        this->duration = duration;
        if (amt <= checkBalance()) {
            double interest = (checkBalance() * roi * duration) / (100 * 12);
            double maturity = checkBalance() + interest;
            cout << "FD Rate: " << roi << "%" << endl;
            cout << "Earned Interest: ₹" << interest << endl;
            cout << "Maturity Value: ₹" << maturity << endl;
        } else {
            cout << "Not Enough Funds for FD!" << endl;
        }
        cout << "------------------------------------------------------" << endl;
    }
};

int main() {
    int accNo;
    string holder;
    double balance, odRequest, fdTerm;
    int depositAmt, withdrawAmt, option;

    cout << "Enter Account ID: ";
    cin >> accNo;
    cout << "Enter Account Holder Name: ";
    cin >> holder;
    cout << "Enter Initial Balance: ";
    cin >> balance;

    cout << "------------------------------------------------------" << endl;

    Savings savAcc;
    Current curAcc;
    FixedDeposit fdAcc;

    savAcc.setAccountInfo(accNo, holder, balance);

    do {
        cout << "========= Welcome to SmartBank =========" << endl;
        cout << "1. View Account Info" << endl;
        cout << "2. Add Funds" << endl;
        cout << "3. Withdraw Funds" << endl;
        cout << "4. Apply Interest (Savings)" << endl;
        cout << "5. Check Overdraft (Current)" << endl;
        cout << "6. Open Fixed Deposit" << endl;
        cout << "0. Exit" << endl;
        cout << "Choose an option: ";
        cin >> option;
        cout << "------------------------------------------------------" << endl;

        switch (option) {
            case 1:
                savAcc.showDetails();
                break;

            case 2:
                cout << "Enter amount to add: ₹";
                cin >> depositAmt;
                savAcc.addMoney(depositAmt);
                break;

            case 3:
                cout << "Enter amount to withdraw: ₹";
                cin >> withdrawAmt;
                savAcc.withdrawMoney(withdrawAmt);
                break;

            case 4:
                savAcc.addInterest(6.5);
                break;

            case 5:
                curAcc.setAccountInfo(accNo, holder, savAcc.checkBalance());
                cout << "Max OD Allowed: ₹50000" << endl;
                cout << "Enter OD Request Amount: ₹";
                cin >> odRequest;
                curAcc.overdraftService(odRequest, 50000);
                break;

            case 6:
                cout << "Enter FD Amount: ₹";
                cin >> depositAmt;
                cout << "Duration in Months: ";
                cin >> fdTerm;
                fdAcc.setAccountInfo(accNo, holder, savAcc.checkBalance());
                fdAcc.calculateFDInterest(7.32, depositAmt, fdTerm);
                break;

            case 0:
                cout << "Session Ended. Have a Great Day!" << endl;
                break;

            default:
                cout << "Invalid Option. Try Again!" << endl;
        }

    } while (option != 0);

}
>>>>>>> e0be40b (Update 1.cpp)
