
//Muahammad Saad Sohail  24K-0549

#include<iostream>
#include<string.h>
using namespace std;

class Car{
	private:
		string RegistrationNumber;
		string ModelName;
		string OwnerName;
	public:
		Car(string reg,string mn,string on){
			RegistrationNumber =reg;
			ModelName = mn ;
			OwnerName = on;
		}
		Car(Car& obj, string own){
			RegistrationNumber = obj.RegistrationNumber;	
			ModelName = obj.ModelName;
			OwnerName = own;
		}
		void Display(){
			cout<<"Displaying Car Details:-"<<endl;
			cout<<"Registration Number: "<<RegistrationNumber<<endl;
			cout<<"Model Name: "<<ModelName<<endl;
			cout<<"Owner Name: "<<OwnerName<<endl;
		}
};

int main(){
	Car car1("sda213","x1","Mark");
	Car car2(car1,"saad");
	cout<<"Car 1:-"<<endl;
	car1.Display();
	cout<<endl;
	cout<<"Car 2:-"<<endl;
	car2.Display();
	
	return 0;
}
