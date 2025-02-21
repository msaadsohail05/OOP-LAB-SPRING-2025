

    
//Muahammad Saad Sohail  24K-0549

#include<iostream>
#include<string.h>
using namespace std;

class Battery{
	private:
		int Id;
		string Company;
		int Capacity;
	public:
		Battery(int id,string c,int cap){
			Id = id;
			Company = c;
			Capacity = cap;
		}
		void Display(){
			cout<<"Displaying Battery Details:-"<<endl;
			cout<<" ID: "<<Id<<endl;
			cout<<"Company Name: "<<Company<<endl;
			cout<<"Capacity: "<<Capacity<<endl;
		}
};

class SmartPhone{
	private:
		string name;
		Battery b;
		int NumProfs;
	public:
		University(string n){
			name = n;
			NumProfs = 0;	
		}
		void AddProfessor(Professor* p){
			NumProfs;
			profs[NumProfs] = p;
			cout<<"Professor added Successfully!"<<endl<<endl;
			NumProfs++;
		}
		void displayunidetails(){
			cout<<"University Name: "<<name<<endl;			
			for(int i=0;i<NumProfs;i++){
				profs[i]->Display();
			}
		}	
};

int main(){
	Professor p1(124,"Mark","AI"), p2(486,"Howard","SE"), p3(456,"David","Computer Science");
	
	University u1("Fast");
	u1.AddProfessor(&p1);
	u1.AddProfessor(&p2);
	u1.AddProfessor(&p3);
	u1.displayunidetails();	
	return 0;
}

