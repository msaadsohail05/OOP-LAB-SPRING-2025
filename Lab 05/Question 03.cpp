

    
//Muahammad Saad Sohail  24K-0549

#include<iostream>
#include<string.h>
using namespace std;

class Professor{
	private:
		int Id;
		string Name;
		string department;
	public:
		Professor(int id,string n,string d){
			Id = id;
			Name = n;
			department = d;
		}
		void Display(){
			cout<<"Displaying Professor Details:-"<<endl;
			cout<<"Professor ID: "<<Id<<endl;
			cout<<"Professor Name: "<<Name<<endl;
			cout<<"Department: "<<department<<endl;
		}
};

class University{
	private:
		string name;
		Professor* profs[100];
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
