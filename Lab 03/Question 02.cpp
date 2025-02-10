//Muhammad Saad Sohail 24K-0549

#include<iostream>
#include<string.h>
using namespace std;

class TeaMug{
	private:
		string brand;
		string color;
		int capacity;
		int currentFillLevel;
	public:
		TeaMug(){
			cout<<"Enter brand: ";
			cin.ignore();
			getline(cin,brand);
			cout<<"Enter colour: ";
			getline(cin,color);
			cout<<"Enter the capacity of the tea mug: ";
			cin>>capacity;
			cout<<"Enter the current Fill Level of the tea mug: ";
			cin>>currentFillLevel;	
		}
		int GetCapacity(){
			return capacity;
		}
		int GetcurrentFillLevel(){
			return currentFillLevel;
		}
		void SetcurrentFillLevel(int level) {
		    currentFillLevel = level;
		}
		void sipTea(){
			if(currentFillLevel>0){
				--currentFillLevel;
			}
			else{
				cout<<"You are out of tea!"<<endl;
			}
		}
		int empty(){
			if(currentFillLevel==0){
				return 1;
			}
			else{
				return 0;
			}
		}	
		void refill(){
			int flag = empty();
			if(flag == 1){
				for(int i=0;i<capacity;i++){
					++currentFillLevel;
				}
			}
			else{
				cout<<"Refill not needed! "<<endl;
			}
		}			
};

int main(){
	int flag1;
	TeaMug t1;
	int flag,choice;
	flag = 1;
	while(flag == 1){
		cout<<"Enter 1 to sip or 2 to refill the mug: ";
		cin>>choice;
		switch(choice){
			case 1:
				t1.sipTea();
				flag1 = t1.empty();
				if(flag1 == 1){
					cout<<"Refilling the tea mug!"<<endl;
					t1.SetcurrentFillLevel(t1.GetCapacity());
				}
				break;
			case 2:
				t1.refill();
				break;	
		}
		cout<<"Enter 1 to continue or any other number to stop: ";
		cin>>flag;
	}
	return 0;
}
