

    
//Muahammad Saad Sohail  24K-0549

#include<iostream>
#include<string.h>
using namespace std;

class Battery{
	private:
		int Id;
		string Company;
		int Capacity;
	public:
		Battery(int cap){
			//Id = id;
			Company = "S Batteries";
			Capacity = cap;
		}
		void Display(){
			cout<<"Displaying Battery Details:-"<<endl;
			//cout<<" ID: "<<Id<<endl;
			cout<<"Company Name: "<<Company<<endl;
			cout<<"Capacity: "<<Capacity<<endl;
		}
};

class SmartPhone{
	private:
		string name;
		Battery b;
	public:
		SmartPhone(string n,int c){
			name = n;
			b(c);	
		}
		void displaydetails(){
			cout<<endl;
			cout<<"Smart Phone Name: "<<name<<endl;			
			b.Display();
		}	
};

int main(){
	SmartPhone s1("Samsung",4000), s2("Xiaomi"5000), s3("Mario",6000);
	s1.displaydetails();
	s2.displaydetails();
	
	return 0;
}

