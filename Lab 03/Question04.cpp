//Muhammad Saad Sohail 24K-0549

#include<iostream>
#include<string.h>
using namespace std;

class Laptop{
	private:
		string brand;
		string model;
		string processor;
		int RAM;
		int storage;
	public:
		Laptop(){
			cout<<"Enter brand name: ";
			cin.ignore();
			cin>>brand;
			cout<<"Enter model name: ";
			cin.ignore();
			cin>>model;
			cout<<"Processor: ";
			cin.ignore();
			cin>>processor;
			cout<<"RAM: ";
			cin>>RAM;
			cout<<"Enter Storage: ";
			cin>>storage;
		}
		void turnOnOff(){
			int turn;
			cout<<"Enter 1 to turn on the laptop or 0 to turn it off: ";
			cin>>turn;
			if(turn == 1){
				cout<<"Turning On...."<<endl;
			} 
			else if(turn == 0){
				cout<<"Turning Off...."<<endl;
			}
		}
		void run(){
			string name;
			cout<<"Enter the name of the progamme you want to run: ";
			cin.ignore();
			cin>>name;
			cout<<name<<" is now running."<<endl;
		}
		void displayspecs(){
			cout<<"Displaying specicfications of the laptop:-"<<endl;
			cout<<"Brand: "<<brand<<endl;
			cout<<"Model: "<<model<<endl;
			cout<<"Processor: "<<processor<<endl;
			cout<<"RAM: "<<RAM<<endl;
			cout<<"Storage: "<<storage<<endl;
			cout<<endl;
		}
		int GetRAM(){
			return RAM;
		}
		int GetStorage(){
			return storage;
		}	
};

int main(){
	Laptop l1;
	Laptop l2;
	int ram1 = l1.GetRAM();
	int ram2 = l2.GetRAM();
	int str1 = l1.GetStorage();
	int str2 = l2.GetStorage();
	int choice,flag,l;
	flag = 1;
	while(flag == 1){
		cout<<"Enter 1 for displaying specs, 2 for turning laptop on or off, 3 for running a program, or 4 for comparing both laptops: ";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter 1 for laptop 1 or 2 for laptop 2: ";
				cin>>l;
				if(l==1){
					l1.displayspecs();
				}
				else if(l==2){
					l2.displayspecs();
				}
				else{
					cout<<"Invalid intput!";
				}				
				break;
			case 2:
				cout<<"Enter 1 for laptop 1 or 2 for laptop 2: ";
				cin>>l;
				if(l==1){
					l1.turnOnOff();
				}
				else if(l==2){
					l2.turnOnOff();
				}
				else{
					cout<<"Invalid intput!";
				}
				break;
			case 3:
				cout<<"Enter 1 for laptop 1 or 2 for laptop 2: ";
				cin>>l;
				if(l==1){
					l1.run();
				}
				else if(l==2){
					l2.run();
				}
				else{
					cout<<"Invalid intput!";
				}
				break;
			case 4:
				cout<<"Laptop 1 Specs:-"<<endl;
				l1.displayspecs();
				cout<<"Laptop 2 Specs:-"<<endl; 
				l2.displayspecs();
				if(l1.GetStorage() > l2.GetStorage()){
					if(l1.GetRAM() > l2.GetRAM()){
						cout<<"Laptop 1 is better than laptop 2!"<<endl;
					}
					else if(l2.GetRAM() > l1.GetRAM()){
						cout<<"Laptop 2 is better than laptop 1!"<<endl;
					}
					else if(l1.GetRAM() == l2.GetRAM()){
						cout<<"Laptop 1 is better than laptop 2!"<<endl;
					}
				}
				else if(l2.GetStorage() > l1.GetStorage()){
					if(l2.GetRAM() > l1.GetRAM()){
						cout<<"Laptop 2 is better than laptop 1!"<<endl;
					}
					else if(l1.GetRAM() > l2.GetRAM()){
						cout<<"Laptop 1 is better than laptop 2!"<<endl;
					}
					else if(l2.GetRAM() == l1.GetRAM()){
						cout<<"Laptop 2 is better than laptop 1!"<<endl;
					}
				}
			default:
				cout<<"Invalid Input! "<<endl;				
		}
		cout<<"Enter 1 if you want to continue or any other number if you want to stop: ";
		cin>>flag;
	}	
	return 0;
}
