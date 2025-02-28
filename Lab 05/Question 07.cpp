//Muahammad Saad Sohail  24K-0549

#include <iostream>
#include<string.h>
using namespace std;

class Product{
	private:
		int id;
		string name;
		int price;
	public:
		Product(){
			id=0;
			name = " ";
			price = 0;
		}	
		Product(int i,string n,int p){
			id = i;
			name = n;
			price = p;
		}
		void Display(){
			cout<<"ID: "<<id<<" ";
			cout<<" Name: "<<name<<" ";
			cout<<"price: "<<price<<endl;
		}
		int GetId(){
			return id;
		}
		string GetName(){
			return name;
		}
		int GetPrice(){
			return price;
		}
		
};

class storage{
	private:
		Product* p;
		int capacity;
		int current;
	public:
		storage(){
			p = nullptr;
			capacity = 0;
			current = 0;
		}
		storage(int cap,int cur){
			capacity = cap;
			current =cur;
			p = new Product[capacity];
		}
		void Add(Product& p1){
			if(current<capacity){
				p[current] = p1;
				current++;
			}
			else{
				cout<<"Out of Capacity!"<<endl;
			}
		}
		void arrangeByCost(){
	        for(int i=0;i<current - 1;i++){
	            for(int j=i+1;j<current;j++){
	                if(p[i].GetPrice()<p[j].GetPrice()){
	                    Product temp = p[i];
	                    p[i] = p[j];
	                    p[j] = temp;
	                }
	            }
	        }
    	}
    	void findByName(string search){
	        bool flag = false;
	        for(int i = 0;i<current;i++){
	            if ( p[i].GetName() == search){
	                cout<< "Product:- ";
	                p[i].Display();
	                flag = true;
	                break;
	            }
	        }
	        if (!flag){
	            cout << "No matching product found." << endl;
	        }
    	}
		void StorageDisplay(){
			for(int i=0;i<capacity;i++){
				p[i].Display();
			}
		}
		~storage(){
			delete [] p;
		}	
};

int main(){
	storage es(2,2);
	
	Product pr1(125,"Soap",150);
	Product pr2(126,"Shampoo",140);
	es.Add(pr1);
	es.Add(pr2);
	
	es.StorageDisplay();
	
	es.arrangeByCost();
	cout<<"After arranged by price:"<<endl;
	es.StorageDisplay();
	return 0;
}
