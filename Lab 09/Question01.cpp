//Muhammad Saad Sohail    24K-0549

#include<iostream>
#include<string>

using namespace std;

class Vehicle{
	protected:
		string model;
		double rate;
	public:				
		Vehicle(string m, double r): model(m), rate(r){}
		virtual double getDailyRate() =0; 
		virtual void displayDetails() =0;
		virtual ~Vehicle(){}
};

class Car : public Vehicle{
	public:
		Car(string m, double r):Vehicle(m,r){}
		double getDailyRate(){
			return rate;
		}
		void displayDetails(){
			cout<<"Dipslaying Car Details:-"<<endl;
			cout<<"Car Model: "<<model<<endl;
			cout<<"Rate: "<<getDailyRate()<<endl;
		}
	
};

class Bike : public Vehicle{
	public:
		Bike(string m, double r):Vehicle(m,r){}
		double getDailyRate(){
			return rate;
		}
		void displayDetails(){
			cout<<"Dipslaying Bike Details:-"<<endl;
			cout<<"Bike Model: "<<model<<endl;
			cout<<"Rate: "<<getDailyRate()<<endl;
		}
};

int main(){
	Vehicle* C1 = new Car("Ciaz",50.2);
	Vehicle* B1 = new Bike("Ducati",70.4);
	C1->displayDetails();
	cout<<"Displaying daily rate of bike"<<endl;
	cout<<B1->getDailyRate()<<endl;
	delete C1;
	delete B1;
	return 0;
}
