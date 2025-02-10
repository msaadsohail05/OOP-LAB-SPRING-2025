//Muhammad Saad Sohail 24K-0549

#include<iostream>
#include<string.h>
using namespace std;

class MarkerPen{
	private:
		string brand;
		string color;
		int inklevel;
		int refillability;
	public:
		MarkerPen(){
			cout<<"Enter brand: ";
			cin.ignore();
			getline(cin,brand);
			cout<<"Enter colour of the marker: ";
			cin.ignore();
			getline(cin,color);
			cout<<"Enter ink level: ";
			cin>>inklevel;
			if(inklevel<10){
				refillability = 1;
			}
			else if(inklevel ==10){
				refillability = 0;
			}
		}
		string GetBrand(){
			return brand;
		}
		int GetInkLevel(){
			return inklevel;
		}
		int GetRefillability(){
			return refillability;
		}
		void SetInkLevel(int i){
			inklevel = i;
		}
		void SetRefillability(int r){
			refillability = r;
		}
		void write(){
			if(inklevel>0){
				cout<<"writing..."<<endl;
				--inklevel;
				refillability = 1;
			}
			else{
				cout<<"Insufficient ink! Refill."<<endl;
			}
		}
		void refill(){
			if(refillability == 1){
				inklevel = 10;
				refillability = 0;
				cout<<"Marker has been refilled!"<<endl;
			}
			else{
				cout<<"Marker already full!"<<endl;
			}
		}
};

int main(){
	int lvl;
	MarkerPen p1;
	int flag,choice;
	flag = 1;
	while(flag == 1){
		cout<<"Enter 1 to write or 2 to refill the marker: ";
		cin>>choice;
		switch(choice){
			case 1:
				p1.write();
				lvl = p1.GetInkLevel();
				if(lvl == 1){
					p1.refill();
				}
				break;
			case 2:
				p1.refill();
				break;	
		}
		cout<<"Enter 1 to continue or any other number to stop: ";
		cin>>flag;
	}	
	return 0;
}
