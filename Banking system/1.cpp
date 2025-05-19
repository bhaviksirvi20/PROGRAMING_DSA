/*
Simple Bank Management System with Classes and Inheritance.

- Bank: Account info, deposit, withdraw, balance check.
- Savings: Interest calculation on savings balance.
- Current: Overdraft facility with limit.
- FixedDeposit: Calculates FD interest and maturity value.

Main: Menu driven program for user to perform banking operations.
*/

#include <iostream>
#include <cmath>

using namespace std;

class Bank {
protected:
    int accNo;
    string holderName;
    double currentBalance;

public:
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
