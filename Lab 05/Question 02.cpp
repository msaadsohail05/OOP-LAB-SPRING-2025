
//Muahammad Saad Sohail  24K-0549

#include<iostream>
#include<string.h>
using namespace std;

class Patient{
	private:
		int Id;
		string Name;
		int* tests;
	public:
		Patient(int id,string n,int t){
			Id = id;
			Name = n;
			tests = new int(t);
		}
		Car(Car& obj){
			RegistrationNumber = new string(*obj.RegistrationNumber);	
			ModelName = new string(*obj.ModelName);
			OwnerName = obj.OwnerName;
		}
		void Display(){
			cout<<"Displaying Car Details:-"<<endl;
			cout<<"Registration Number: "<<*RegistrationNumber<<endl;
			cout<<"Model Name: "<<*ModelName<<endl;
			cout<<"Owner Name: "<<*OwnerName<<endl;
		}
};

int main(){
	Car car1("sda213","x1","Mark");
	Car car2(car1);
	cout<<endl;
	
	return 0;
}

