
//Muahammad Saad Sohail  24K-0549

#include<iostream>
#include<string.h>
using namespace std;
 
class Book{
 	private:
 		static int idcounter;
 		int BookID;
 		string* title;
 		float* price;
 		int* stock;
 	public:
		Book(string t,float p,int s): BookID(++idcounter){
	 		title = new string(t);
	 		price = new float(p);
	 		stock = new int(s);
		}
		Book(Book& obj) : BookID(++idcounter){
			title = new string(*obj.title);
	 		price = new float(*obj.price);
	 		stock = new int(*obj.stock);	
		}
		int GetId(){
			return BookID;
		}
		string GetTitle(){
			return *title;
		}
		float GetPrice(){
			return *price;
		}
		int GetStock(){
			return *stock;
		}
		void SetStock(int s){
			*stock = s;
		}
		
		void UpdateBookDetails(){
			cout<<"Updating Details!"<<endl;
			cout<<"Enter the title of the book: ";
			cin>>*title;
			cout<<"Enter the new price of the book: ";
			cin>>*price;
			cout<<"The price of the book titled: "<<*title<<" has been updated to: "<<*price<<endl;
			cout<<"Enter the new stock level: ";
			cin>>*stock;
			cout<<"The stock of the book titled: "<<*title<<" has been updated to: "<<*stock<<endl;
		}
		int simulate(Book array1[],int index){
			string t;
			int amount,num;
			float change;
			cout<<"Enter the title of the book you want: ";
			cin>>t;
			for(int i=0;i<index;i++){
				if(array1[i].GetTitle() == t){
					if(array1[i].GetStock() < 1){
						cout<<"Stock is lower than 5. Reorder!"<<endl;
						return 0;
					}
					else{
						return 1;
					}
					cout<<"The price of the book is: "<<array1[i].GetPrice()<<endl;
					cout<<"Enter the number of copies you want to buy: ";
					cin>> num;
					int copies = array1[i].GetStock() - num;
					if(copies<0){
						cout<<"Sorry! Purchase not Possible. Stock limit reached! Number of excess books: "<<-1*copies<<endl;
						break;
					}
					float total = num * array1[i].GetPrice();
					float pr = ApplyDiscount(num,total);
					cout<<"Enter the amount: ";
					cin>>amount;
					change = amount - pr;
					if(change > 0.0){
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
		
		float ApplyDiscount(int n,float p){
			if(n>5 && n<10){
				float nprice = 0.95*p;
				cout<<"You have been given a discount of 5%!The total is: "<<nprice<<endl;
				return nprice;
			}		
			else if(n>10){
				float nprice = 0.90*p;
				cout<<"You have been given a discount of 10%!The total is: "<<nprice<<endl;
				return nprice;	
			}
			else{
				cout<<"Your Bill is: "<<p<<endl;
				return p;
			}
		}
		void Display(){
			cout<<"Displaying Book  details:-"<<endl;
		 	cout<<"Book ID: "<<GetId()<<endl;
		 	cout<<"Title: "<<GetTitle()<<endl;
		 	cout<<"Price: "<<GetPrice()<<endl;
		 	cout<<"Stock: "<<GetStock()<<endl;
		 	cout<<endl;
		}
		~Book(){
			delete title;
			delete price;
			delete stock;
			cout<<"Destructor Called! Object Destroyed."<<endl;
		}	
 };
 int Book :: idcounter = 0;
 
 int main(){
 	Book book1("Me",49.99,50);
 	Book book2(book1);
 	cout<<"Displaying Book1  details:-"<<endl;
 	book1.Display();
 	cout<<"Book 2 details:-"<<endl;
 	book2.Display();
 	return 0;
 }

