// Muhammad Saad Sohail  24K-0549

#include<iostream>
#include<string.h>

using namespace std;

class Account{
	public:
		int accountNumber;
		float balance;
		Account(int an,float b) :accountNumber(an),balance(b){}
		virtual void displayDetails(){
			cout<<"Account Number: "<<accountNumber<<endl;
			cout<<"Balance: "<<balance<<endl;
		} 	
};

class SavingsAccount : public Account{
	public:
		float interestRate;
		SavingsAccount(int an,float b,float ir) : Account(an,b),interestRate(ir){}
		void displayDetails() override{
			cout<<"Account Number: "<<accountNumber<<endl;
			cout<<"Balance: "<<balance<<endl;
			cout<<"Interest Rate: "<<interestRate<<endl;
		}
};

class CheckingAccount:public Account{
	public:
		float overdraftLimit;
		CheckingAccount(int an,float b,float ol) : Account(an,b) , overdraftLimit(ol){}
		void displayDetails()override{
			cout<<"Account Number: "<<accountNumber<<endl;
			cout<<"Balance: "<<balance<<endl;
			cout<<"Over Draft Limit: "<<overdraftLimit<<endl;
		}	
};

int main(){
	int num;
	float bal,rate,odl;
	int flag;
	cout<<"Enter your Account Number: ";
	cin>>num;
	cout<<"Enter your balance: ";
	cin>>bal;	
	cout<<"Enter 1 if you want a savings account or 2 if you want a checking account: ";
	cin>>flag;
	if(flag == 1){
		cout<<"Enter the interest rate: ";
		cin>>rate;
		SavingsAccount sa(num,bal,rate);
		sa.displayDetails();	
	}
	else if(flag == 2){
		cout<<"Enter the Over Draft Limit: ";
		cin>>odl;
		CheckingAccount ca(num,bal,odl);
		ca.displayDetails();
	}
	else{
		cout<<"Invalid Input!"<<endl;
	}
}
