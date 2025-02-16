//Muahammad Saad Sohail  24K-0549

#include<iostream>
#include<string.h>
using namespace std;
 
class Book{
 	private:
 		string title;
 		float price;
 		int stock;
 	public:
		Book(string t,float p,int s){
	 		title = t;
	 		price = p;
	 		stock = s;
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
		void SetStock(int s){
			stock = s;
		}
		
		void UpdateBookDetails(){
			cout<<"Updating Details!"<<endl;
			cout<<"Enter the title of the book: ";
			cin>>title;
			cout<<"Enter the new price of the book: ";
			cin>>price;
			cout<<"The price of the book titled: "<<title<<" has been updated to: "<<price<<endl;
			cout<<"Enter the new stock level: ";
			cin>>stock;
			cout<<"The stock of the book titled: "<<title<<" has been updated to: "<<stock<<endl;
		}
		int simulate(Book array1[],int index){
			string t;
			int amount,change,num;
			cout<<"Enter the title of the book you want: ";
			cin>>t;
			for(int i=0;i<index;i++){
				if(array1[i].GetTitle() == t){
					if(array1[i].GetStock() < 1){
						cout<<"Stock is lower than 5. Reorder!"<<endl;
						return 0;
					}
					cout<<"The price of the book is: "<<array1[i].GetPrice()<<endl;
					cout<<"Enter the number of copies you want to buy: ";
					cin>> num;
					int copies = array1[i].GetStock() - num;
					if(copies<0){
						cout<<"Sorry! Purchase not Possible. Stock limit reached! Number of excess books: "<<-1*copies<<endl;
						break;
					}
					int total = num * array1[i].GetPrice();
					ApplyDiscount(num,total);
					cout<<"Enter the amount: ";
					cin>>amount;
					change = amount - array1[i].GetPrice();
					if(change > 0){
						cout<<"Payment Successful!"<<endl<<"Here's your change: "<<change<<endl;
					}
					else{
						cout<<"Payment Successful!"<<endl;
					}
					int st = array1[i].GetStock();
					--st;
					array1[i].SetStock(st);
					if(array1[i].GetStock() < 5){
						cout<<"Stock is lower than 5. Reorder!"<<endl;
					}
				}
			}
			
		}
		
		void ApplyDiscount(int n,int p){
			if(n>5 && n<10){
				float nprice = 0.95*p;
				cout<<"You have been given a discount of 5%!The total is: "<<nprice<<endl;
			}		
			else if(n>10){
				float nprice = 0.90*p;
				cout<<"You have been given a discount of 10%!The total is: "<<nprice<<endl;
					
			}
			else{
				cout<<"Your Bill is: "<<p<<endl;
			}
		}	
 };
 
 int main(){
 	Book book1("Me",49.99,50);
 	
 	return 0;
 }
