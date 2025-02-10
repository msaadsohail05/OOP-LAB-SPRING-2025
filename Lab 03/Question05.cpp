//Muhammad Saad Sohail

#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

class GroceryStore{
	private:		
		int num;
		string* items;
		int* prices;
	public:
		GroceryStore(){
			num=0;
			items = new string[num];
			prices = new int[num];
		}
		void additem(){
			string* tempItems = new string[num+1];
		    int* tempPrices = new int[num+1];		
		    for (int i = 0; i < num; i++) {
		        tempItems[i] = items[i];
		        tempPrices[i] = prices[i];
		    }		
		    delete[] items;
		    delete[] prices;		
		    items = tempItems;
		    prices = tempPrices;			
			cout<<"Enter the item you want to add: ";
			cin.ignore();
    		getline(cin, items[num]);
			cout<<"Enter the price of the of the item you added: ";
			cin>>prices[num];
			++num;			
		}
		void updateprice(){
			int flag=0;
			string search;
			cout<<"Enter the name of the item whose price you want to update: ";
			cin.ignore();
			getline(cin, search);
			for(int i=0;i<num;i++){
				if(items[i] == search){
					cout<<"Enter the new price of "<<items[i]<<": ";
					cin>>prices[i];
					cout<<"Price Updated!"<<endl;
					flag = 1;
					break;
				}				
			}
			if(flag == 0){
				cout<<"Item not found!"<<endl;
			}
		}
		void viewinventory(){
			cout<<"Displaying Inventory:-"<<endl;
			cout<<"Item\tPrice"<<endl;
			for(int i=0;i<num;i++){
				cout<<items[i]<<"\t"<<prices[i]<<endl;
			}
		}
		void makereceipt(){
			int num1,x=0,total=0,flag1=0;
			vector<string> bitems;
			vector<int> bprices;
			vector<int> quantity;
			viewinventory();
			cout<<"Enter the number of different items you want to buy: ";
			cin>>num1;
			for(int j=0;j<num1;j++){
				string item;
				cout<<"Enter the item you want to buy: ";
				cin.ignore();
				getline(cin, item);
				for(int i=0;i<num;i++){
					if(items[i] == item){
						int qty;
						cout<<"Enter the quantity of this item you want: ";
						cin>>qty;
						bitems.push_back(item);
                		quantity.push_back(qty);
                		bprices.push_back(qty * prices[i]);
						total += qty*prices[i];
						flag1 = 1;
					}
				}
				if(flag1 == 0){
					cout<<"Item not found!"<<endl;
				}
			}
			cout<<"Item\tQuantity\tPrice"<<endl;
			for(int i=0;i<num1;i++){
				cout<<bitems[i]<<"\t"<<quantity[i]<<"\t"<<bprices[i]<<endl;
			}
			cout<<"Total:\t\t"<<total<<endl;	
		}
		~GroceryStore(){
			delete [] items;
			delete [] prices;
		}		
};

int main(){
	GroceryStore gs;
	int choice,flag,l;
	flag = 1;
	while(flag == 1){
		cout<<"Enter 1 for adding an item, 2 for updating the pricing of an item, 3 for viewing inventory, or 4 for making receipt: ";
		cin>> choice;
		switch(choice){
			case 1:
				gs.additem();
				break;
			case 2:
				gs.updateprice();
				break;
			case 3:
				gs.viewinventory();
				break;
			case 4:
				gs.makereceipt();
				break;
			default:
				cout<<"Invalid Input! "<<endl;				
		}
		cout<<"Enter 1 if you want to continue or any other number if you want to stop: ";
		cin>>flag;
	}
	return 0;    
}
