#include<iostream>
#include<string.h>

using namespace std;

class Person{
	public:
		string name;
		int age;
		Person(string n,int a) : name(n),age(a){}
		virtual void displayDetails(){
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};

class Teacher : virtual public Person{
	public:
		string subject;
		Teacher(string n,int a, string s) : Person(n,a) , subject(s){} 
		void displayDetails() override{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"Subject: "<<subject;
		}
};

class Researcher : virtual public Person{
	public:
		string researchArea;
		Researcher(string n,int a,string ra) : Person(n,a), researchArea(ra){}
		void displayDetails()override{
				cout<<"Name: "<<name<<endl;
				cout<<"Age: "<<age<<endl;
				cout<<"Research Area: "<<researchArea<<endl;
			}
};

class Professor:public Teacher ,public Researcher{
	public:
		int publications;
		Professor(string n,int a, string s, string ra,int p) : Person(n,a) ,Teacher(n,a,s) , Researcher(n,a,ra) , publications(p) {}
		void displayDetails()override{
			cout<<"Displaying Professor Details:- "<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"Subject: "<<subject;
			cout<<"Research Area: "<<researchArea<<endl;
		}
		
}; 

int main(){
	string pname, sub, research;
	int P_age,publ;
	cout<<"Enter the name of the professor: ";
	cin>>pname;
	cout<<"Enter Subject: ";
	cin>>sub;
	cout<<"Enter the research area of the professor: ";
	cin>>research;
	cout<<"Enter the Age: ";
	cin>>P_age;
	cout<<"Enter publications: ";
	cin>>publ;
	Professor p1(pname,P_age,sub,research,publ);
	p1.displayDetails();
	return 0;
}
