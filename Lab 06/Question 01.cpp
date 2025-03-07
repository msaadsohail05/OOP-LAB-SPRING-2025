// Muhammad Saad Sohail    24K-0549

#include<iostream>
#include<string.h>

using namespace std;

class Employee{
	public:
		string name;
		float salary;
		Employee(string n,float s) : name(n), salary(s){}
		
		virtual void displayDetails(){
			cout<<"Name: "<<name<<endl;
			cout<<"Salary: "<<salary<<endl;
		}
};

class Manager: public Employee{
	public:
		float bonus;
		
		Manager(string n,float s, float b) : Employee(n,s),bonus(b) {}
		virtual void displayDetails() override{
			cout<<"Name: "<<name<<endl;
			cout<<"Salary: "<<salary<<endl;
			cout<<"Bonus: "<<bonus<<endl;
		}
};
int main(){
	string Mname;
	float Msal,Mbon;
	cout<<"Enter the name of the manager: ";
	cin>>Mname;
	cout<<"Enter his salary: ";
	cin>>Msal;
	cout<<"Enter Bonus: ";
	cin>>Mbon;
	Manager m1(Mname,Msal,Mbon);
	m1.displayDetails();
	return 0;
}//Muhammad Saad Sohail  24K-0549
