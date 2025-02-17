//Muahammad Saad Sohail  24K-0549

#include<iostream>
#include<string.h>
using namespace std;

class Car{
	private:
		string* RegistrationNumber;
		string* ModelName;
		string* OwnerName;
	public:
		Car(string reg,string mn,string on){
			RegistrationNumber =new string(reg);
			ModelName = new string(mn) ;
			OwnerName = new string(on);
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
	car1.Display();
	cout<<endl;
	car2.Display();
	
	return 0;
}
