// Muhammad Saad Sohail   24K-0549

#include <iostream>
#include <string>

using namespace std;

class Account {
	public:
	    int accountNumber;
	    double balance;
	    string accountHolderName;
	    string accountType;
	
	    Account(int accNum, double bal, string accHolderName, string accType = "Regular"): accountNumber(accNum), balance(bal), accountHolderName(accHolderName), accountType(accType) {}
	
	    virtual void deposit(double amount) {
	        balance += amount;
	        cout<<"Deposited: "<<amount<<", New Balance: "<<balance<<endl;
	    }
	
	    virtual void withdraw(double amount) {
	        if(amount > balance){
	            cout<<"Insufficient balance!"<<endl;
	        } 
			else{
	            balance -= amount;
	            cout<<"Withdrawn: "<<amount<<", Remaining Balance: "<<balance<<endl;
	        }
	    }
	
	    virtual double calculateInterest() {
	        return 0.0;
	    }
	
	    virtual void printStatement() {
	        cout<<"Account Statement:"<<endl;
	        cout<<"Account Number: " <<accountNumber<<endl;
	        cout<<"Balance: " <<balance<<endl;
	        cout<<"Account Holder: "<<accountHolderName<<endl;
	        cout<<"Account Type: "<<accountType<<endl;
	    }
	
	    void getAccountInfo() {
	        cout<<"Account Number: "<<accountNumber<<endl;
	        cout<<"Balance: "<<balance<<endl;
	        cout<<"Account Holder Name: " << accountHolderName <<endl;
	        cout<<"Account Type: " << accountType <<endl;
	    }
	
	    virtual ~Account() {}
};

class SavingsAccount : public Account {
	public:
	    float interestRate;
	    double minBalance;
	
	    SavingsAccount(int accNum, double bal, string accHolderName, double rate, double minBal, string accType = "Savings"): Account(accNum, bal, accHolderName, accType), interestRate(rate), minBalance(minBal) {}
	
	    double calculateInterest(){
	        return balance * (interestRate / 100);
	    }
	
	    void printStatement() override {
	        Account::printStatement();
	        cout<<"Interest Rate: "<<interestRate<<"%"<<endl;
	        cout<<"Minimum Balance: "<<minBalance<<endl;
	    }
};

class CheckingAccount : public Account {
	public:
	    double minimumBalance;
	
	    CheckingAccount(int accNum, double bal, string accHolderName, double minBal, string accType = "Checking"): Account(accNum, bal, accHolderName, accType), minimumBalance(minBal) {}
	
	    void withdraw(double amount){
	        if (amount > 0 && (balance - amount) >= minimumBalance) {
	            balance -= amount;
	            cout << "Withdrew " << amount << " from Checking Account. New Balance: " << balance << endl;
	        }
			else{
	            cout<<"Withdrawal denied. Minimum balance of "<< minimumBalance<<" must be maintained."<<endl;
	        }
	    }
};

class FixedDepositAccount : public Account {
	public:
	    string maturityDate;
	    float fixedInterestRate;
	
	    FixedDepositAccount(int accNum, double bal, string accHolderName, string maturity, float rate, string accType = "Fixed Deposit"): Account(accNum, bal, accHolderName, accType), maturityDate(maturity), fixedInterestRate(rate) {}
	
	    double calculateInterest(){
	        return balance*(fixedInterestRate / 100);
	    }
	
	    void printStatement(){
	        Account::printStatement();
	        cout<<"Maturity Date: " << maturityDate <<endl;
	        cout<<"Fixed Interest Rate: "<<fixedInterestRate<<"%"<<endl;
	    }
};

int main() {
    SavingsAccount sa(101, 5000, "Alice", 2.5, 1000);
    CheckingAccount ca(102, 3000, "Bob", 500);
    FixedDepositAccount fda(103, 10000, "Charlie", "2026-12-31", 5.0);

    cout <<"Account Details"<<endl;
    sa.getAccountInfo();
    cout << endl;
    ca.getAccountInfo();
    cout << endl;
    fda.getAccountInfo();
    cout << endl;

    cout<<"Deposits and Withdrawals"<<endl;
    sa.deposit(1000);
    sa.withdraw(2000);
    cout << endl;
    ca.withdraw(2800);
    cout<<endl;

    cout<<"Interest Calculations"<<endl;
    cout<<"Savings Interest: "<<sa.calculateInterest()<<endl;
    cout<<"Fixed Deposit Interest: "<<fda.calculateInterest()<<endl;

    cout <<"Account Statements"<<endl;
    sa.printStatement();
    cout << endl;
    fda.printStatement();

    return 0;
}
