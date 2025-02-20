    
//Muahammad Saad Sohail  24K-0549

#include<iostream>
#include<string.h>
using namespace std;

class Patient{
	private:
		int Id;
		string Name;
		int* tests;
		int NumTests;
	public:
		Patient(int id,string n,int t){
			Id = id;
			Name = n;
			NumTests = t;
			tests = new int[NumTests];
			for(int j=0;j<NumTests;j++){
				cout<<"Test no. "<<j+1<<":"<<"Enter your test results: ";
				cin>>tests[j];
			}
		}
		Patient(Patient& obj){
			Id = obj.Id;	
			Name = obj.Name;
			NumTests = obj.NumTests;
			tests = new int[NumTests];
			for(int j=0;j<NumTests;j++){
				tests[j] = obj.tests[j];
			}
		}
		void Display(){
			cout<<"Displaying Patient Details:-"<<endl;
			cout<<"Patient ID: "<<Id<<endl;
			cout<<"Patient Name: "<<Name<<endl;
			for(int i=0;i<NumTests;i++){
				cout<<i+1<<") "<<tests[i]<<endl;
			}
		}
		 ~Patient(){
        delete[] tests;
    }
};

int main(){
	Patient p1(1265,"Mark",4);
	Patient p2(p1);
	cout<<"Patient 1:-"<<endl;
	p1.Display();
	cout<<"Patient 2:-"<<endl;
	p2.Display();	
	return 0;
}
