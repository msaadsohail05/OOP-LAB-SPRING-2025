//Muhammad Saad Sohail  24K-0549

#include<iostream>
#include<string>

using namespace std;

class Book{
	public:
		string title;
		double price;
		Book(string t,double p) : title(t), price(p){}
		friend class Librarian;
};

class Librarian{
	public:
		int id;
		Librarian(int i) : id(i){}
		void display(Book&b1){
			cout<<"Title: "<<b1.title<<endl;
			cout<<"Price: "<<b1.price<<endl;
		}
		void applydiscount(Book&b1){
			b1.price=b1.price*0.2;
		}
};

int main(){
	Book b1("xyz",500.0);
	Librarian l1(654);
	l1.display(b1);
	l1.applydiscount(b1);
	l1.display(b1);	
}
