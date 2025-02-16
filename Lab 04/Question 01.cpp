//Muhammad Saad Sohail   24K-0549

#include<iostream>
#include<string.h>
 using namespace std;
 
 class Book{
 	private:
 		string title;
 		float price;
 		int stock;
 	public:
		Book(){
	 		title = "Unknown";
	 		price = 0.0;
	 		stock = 30;
		}
		string GetTitle(){
			return title;
		}
		float GetPrice(){
			return price;
		}
		int GetStock(){
			return stock;
		}
		void UpdateBookDetails(){
			cout<<"Enter the title of the book: ";
			cin>>title;
			cout<<"Enter the price of the book: ";
			cin>>price;
			cout<<"Enter the stock level: ";
			cin>>stock;
		}
		void simulate(Book array1,int index){
			string t;
			int amount,change;
			cout<<"Enter the title of the book you want: ";
			cin>>t;
			for(int i=0;i<index;i++){
				if(array1[i].GetTitle() == t){
					if(array1[i].GetStock() < 5){
						cout<<"Stock is lower than 5. Reorder!"<<endl;
						break;
					}
					cout<<"The price of the book is: "<<array1[i].GetPrice()<<endl<<"Enter the amount: "<<endl;
					cin>>amount;
					change = amout - array1[i].GetPrice();
					if(change > 0){
						cout<<"Payment Successful!"<<endl<<"Here's your change: "<<change<<endl;
					}
					else{
						cout<<"Payment Successful!"<<endl;
					}
					--array1[i].GetStock();
					if(array1[i].GetStock() < 5){
						cout<<"Stock is lower than 5. Reorder!"<<endl;
					}
				}
			}
			
		}	
 };
