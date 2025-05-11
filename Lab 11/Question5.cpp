// Muhammad Saad Sohail        24K-0549

#include<iostream>
#include<sstream>
using namespace std;

class InsufficientFundsException{
private:
    double deficit;
public:
    InsufficientFundsException(double deficit) :deficit(deficit){}

    string what() const{
        stringstream ss;
        ss<< "InsufficientFundsException - Deficit: $"<<deficit;
        return ss.str();
    }
};

template<typename T>
class BankAccount {
private:
    T balance;
public:
    BankAccount(T initialBalance) : balance(initialBalance){}

    void withdraw(T amount){
        if(amount > balance){
            throw InsufficientFundsException(amount - balance);
        }
        balance -= amount;
    }

    void displayBalance() const{
        cout<<"Balance: $"<<balance<< endl;
    }
};

int main(){
    BankAccount<double> account(500.00);

    account.displayBalance();

    try{
        account.withdraw(600.00);
    }
    catch (const InsufficientFundsException &e){
        cout<<e.what()<<endl;
    }

    return 0;
}
