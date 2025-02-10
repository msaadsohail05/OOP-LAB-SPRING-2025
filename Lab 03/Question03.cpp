//Muhammad Saad Sohail 24K-0549

#include<iostream>
#include<string.h>
using namespace std;

class Planner{
	private:
		string jan[31];
		string feb[28];
		string march[31];
		string apr[30];
		string may[31];
		string jun[30];
		string jul[31];
		string aug[31];
		string sept[30];
		string oct[31];
		string nov[30];
		string dec[31];
	public:
		Planner(){
			for(int i=0;i<31;i++){
				jan[i] = " ";
			}
			
			for(int i=0;i<28;i++){
				feb[i] = " ";
			}
			
			for(int i=0;i<31;i++){
				march[i]= " ";
			}
		
			for(int i=0;i<30;i++){
				apr[i] = " ";
			}
			
			for(int i=0;i<31;i++){
				may[i] = " ";
			}
			
			for(int i=0;i<30;i++){
				jun[i] = " ";			
			}
			
			for(int i=0;i<31;i++){
				jul[i] = " ";				
			}
			
			for(int i=0;i<31;i++){
				aug[i] = " ";
			}
			
			for(int i=0;i<30;i++){
				sept[i] = " ";
			}
			
			for(int i=0;i<31;i++){
				oct[i] = " ";
			}
			
			for(int i=0;i<30;i++){
				nov[i] = " ";
			}
			
			for(int i=0;i<31;i++){
				dec[i] = " ";
			}
		}
		
		void display(){
			cout<<"Displaying all tasks:-"<<endl;
			cout<<endl;
			cout<<"January:-"<<endl;
			cout<<endl;
			for(int i=0;i<31;i++){
				cout<<jan[i];
				cout<<endl;
			}
			
			cout<<"Febuary:-"<<endl;
			cout<<endl;
			for(int i=0;i<28;i++){
				cout<<feb[i];
				cout<<endl;
			}
			
			cout<<"March:-"<<endl;
			cout<<endl;
			for(int i=0;i<31;i++){
				cout<<march[i];
				cout<<endl;
			}
			
			cout<<"April:-"<<endl;
			cout<<endl;
			for(int i=0;i<30;i++){
				cout<<apr[i];
				cout<<endl;
			}
			
			cout<<"May:-"<<endl;
			cout<<endl;
			for(int i=0;i<31;i++){
				cout<<may[i];
				cout<<endl;
			}
			
			cout<<"June:-"<<endl;
			cout<<endl;
			for(int i=0;i<30;i++){
				cout<<jun[i];
				cout<<endl;
			}
			
			cout<<"July:-"<<endl;
			cout<<endl;
			for(int i=0;i<31;i++){
				cout<<jul[i];
				cout<<endl;
			}
			
			cout<<"August:-"<<endl;
			cout<<endl;
			for(int i=0;i<31;i++){
				cout<<aug[i];
				cout<<endl;
			}
			
			cout<<"September:-"<<endl;
			cout<<endl;
			for(int i=0;i<30;i++){
				cout<<sept[i];
				cout<<endl;
			}
			
			cout<<"October:-"<<endl;
			cout<<endl;
			for(int i=0;i<31;i++){
				cout<<oct[i];
				cout<<endl;
			}
			
			cout<<"November:-"<<endl;
			cout<<endl;
			for(int i=0;i<30;i++){
				cout<<nov[i];
				cout<<endl;
			}
			
			cout<<"December:-"<<endl;
			cout<<endl;
			for(int i=0;i<31;i++){
				cout<<dec[i];
				cout<<endl;
			}
		}
		
		void add(){
			cout<<"Adding a Task:-"<<endl;
			int choice,day;
			cout<<"Enter 1 for January, 2 for Febuary, 3 for March, 4 for April, 5 for May, 6 for June, 7 for July, 8 for August, 9 for September, 10 for October, 11 for November, 12 for December: ";
			cin>>choice;
			switch(choice){
				case 1:
					cout<<"Enter the day of the month you want to add a task to: ";
					cin>>day;
					if(jan[day-1] != " "){
						cout<<"Sorry! you already have a task registered for day "<<day<<" of January: "<<endl;
					}
					else{
						cout<<"Enter the task for day "<<day<<" of January: ";
						cin.ignore();
						getline(cin,jan[day-1]);
					}
					cout<<"Task added!"<<endl;
					break;
				case 2:
					cout<<"Enter the day of the month you want to add a task to: ";
					cin>>day;
					if(feb[day-1] != " "){
						cout<<"Sorry! you already have a task registered for day "<<day<<" of Febuary: "<<endl;
					}
					else{
						cout<<"Enter the task for day "<<day<<" of Febuary: ";
						cin.ignore();
						getline(cin,feb[day-1]);
					}
					cout<<"Task added!"<<endl;
					break;
				case 3:
					cout<<"Enter the day of the month you want to add a task to: ";
					cin>>day;
					if(march[day-1] != " "){
						cout<<"Sorry! you already have a task registered for day "<<day<<" of March: "<<endl;
					}
					else{
						cout<<"Enter the task for day "<<day<<" of March: ";
						cin.ignore();
						getline(cin,march[day-1]);
					}
					cout<<"Task added!"<<endl;
					break;
				case 4:
					cout<<"Enter the day of the month you want to add a task to: ";
					cin>>day;
					if(apr[day-1] != " "){
						cout<<"Sorry! you already have a task registered for day "<<day<<" of April: "<<endl;
					}
					else{
						cout<<"Enter the task for day "<<day<<" of April: ";
						cin.ignore();
						getline(cin,apr[day-1]);
					}
					cout<<"Task added!"<<endl;
					break;
				case 5:
					cout<<"Enter the day of the month you want to add a task to: ";
					cin>>day;
					if(may[day-1] != " "){
						cout<<"Sorry! you already have a task registered for day "<<day<<" of May: "<<endl;
					}
					else{
						cout<<"Enter the task for day "<<day<<" of May: ";
						cin.ignore();
						getline(cin,may[day-1]);
					}
					cout<<"Task added!"<<endl;
					break;
				case 6:
					cout<<"Enter the day of the month you want to add a task to: ";
					cin>>day;
					if(jun[day-1] != " "){
						cout<<"Sorry! you already have a task registered for day "<<day<<" of June: "<<endl;
					}
					else{
						cout<<"Enter the task for day "<<day<<" of June: ";
						cin.ignore();
						getline(cin,jun[day-1]);
					}
					cout<<"Task added!"<<endl;
					break;
				case 7:
					cout<<"Enter the day of the month you want to add a task to: ";
					cin>>day;
					if(jul[day-1] != " "){
						cout<<"Sorry! you already have a task registered for day "<<day<<" of July: "<<endl;
					}
					else{
						cout<<"Enter the task for day "<<day<<" of July: ";
						cin.ignore();
						getline(cin,jul[day-1]);
					}
					cout<<"Task added!"<<endl;
					break;
				case 8:
					cout<<"Enter the day of the month you want to add a task to: ";
					cin>>day;
					if(aug[day-1] != " "){
						cout<<"Sorry! you already have a task registered for day "<<day<<" of August: "<<endl;
					}
					else{
						cout<<"Enter the task for day "<<day<<" of August: ";
						cin.ignore();
						getline(cin,aug[day-1]);
					}
					cout<<"Task added!"<<endl;
					break;
				case 9:
					cout<<"Enter the day of the month you want to add a task to: ";
					cin>>day;
					if(sept[day-1] != " "){
						cout<<"Sorry! you already have a task registered for day "<<day<<" of September: "<<endl;
					}
					else{
						cout<<"Enter the task for day "<<day<<" of September: ";
						cin.ignore();
						getline(cin,sept[day-1]);
					}
					cout<<"Task added!"<<endl;
					break;
				case 10:
					cout<<"Enter the day of the month you want to add a task to: ";
					cin>>day;
					if(oct[day-1] != " "){
						cout<<"Sorry! you already have a task registered for day "<<day<<" of October: "<<endl;
					}
					else{
						cout<<"Enter the task for day "<<day<<" of October: ";
						cin.ignore();
						getline(cin,oct[day-1]);
					}
					cout<<"Task added!"<<endl;
					break;
				case 11:
					cout<<"Enter the day of the month you want to add a task to: ";
					cin>>day;
					if(nov[day-1] != " "){
						cout<<"Sorry! you already have a task registered for day "<<day<<" of November: "<<endl;
					}
					else{
						cout<<"Enter the task for day "<<day<<" of November: ";
						cin.ignore();
						getline(cin,nov[day-1]);
					}
					cout<<"Task added!"<<endl;
					break;
				case 12:
					cout<<"Enter the day of the month you want to add a task to: ";
					cin>>day;
					if(dec[day-1] != " "){
						cout<<"Sorry! you already have a task registered for day "<<day<<" of December: "<<endl;
					}
					else{
						cout<<"Enter the task for day "<<day<<" of December: ";
						cin.ignore();
						getline(cin,dec[day-1]);
					}
					cout<<"Task added!"<<endl;
					break;											
			}
		}
		
		void remove(){
			cout<<"Removing a Task:-"<<endl;
			int choice,day;
			cout<<"Enter 1 for January, 2 for Febuary, 3 for March, 4 for April, 5 for May, 6 for June, 7 for July, 8 for August, 9 for September, 10 for October, 11 for November, 12 for December: ";
			cin>>choice;
			switch(choice){
				case 1:
					cout<<"Enter the day of the month you want to remove a task from: ";
					cin>>day;
					if(jan[day-1] == " "){
						cout<<"Sorry! you already have no task registered for day "<<day<<" of January: "<<endl;
					}
					else{
						jan[day-1] = " ";	
					}
					break;
				case 2:
					cout<<"Enter the day of the month you want to remove a task from: ";
					cin>>day;
					if(feb[day-1] == " "){
						cout<<"Sorry! you already have no task registered for day "<<day<<" of Febuary: "<<endl;
					}
					else{
						feb[day-1] = " ";	
					}
					break;
				case 3:
					cout<<"Enter the day of the month you want to remove a task from: ";
					cin>>day;
					if(march[day-1] == " "){
						cout<<"Sorry! you already have no task registered for day "<<day<<" of March: "<<endl;
					}
					else{
						march[day-1] = " ";	
					}
					break;
				case 4:
					cout<<"Enter the day of the month you want to remove a task from: ";
					cin>>day;
					if(apr[day-1] == " "){
						cout<<"Sorry! you already have no task registered for day "<<day<<" of April: "<<endl;
					}
					else{
						apr[day-1] = " ";	
					}
					break;
				case 5:
					cout<<"Enter the day of the month you want to remove a task from: ";
					cin>>day;
					if(may[day-1] == " "){
						cout<<"Sorry! you already have no task registered for day "<<day<<" of May: "<<endl;
					}
					else{
						may[day-1] = " ";	
					}
					break;
				case 6:
					cout<<"Enter the day of the month you want to remove a task from: ";
					cin>>day;
					if(jun[day-1] == " "){
						cout<<"Sorry! you already have no task registered for day "<<day<<" of June: "<<endl;
					}
					else{
						jun[day-1] = " ";	
					}
					break;
				case 7:
					cout<<"Enter the day of the month you want to remove a task from: ";
					cin>>day;
					if(jul[day-1] == " "){
						cout<<"Sorry! you already have no task registered for day "<<day<<" of July: "<<endl;
					}
					else{
						jul[day-1] = " ";	
					}
					break;
				case 8:
					cout<<"Enter the day of the month you want to remove a task from: ";
					cin>>day;
					if(aug[day-1] == " "){
						cout<<"Sorry! you already have no task registered for day "<<day<<" of August: "<<endl;
					}
					else{
						aug[day-1] = " ";	
					}
					break;
				case 9:
					cout<<"Enter the day of the month you want to remove a task from: ";
					cin>>day;
					if(sept[day-1] == " "){
						cout<<"Sorry! you already have no task registered for day "<<day<<" of September: "<<endl;
					}
					else{
						sept[day-1] = " ";	
					}
					break;
				case 10:
					cout<<"Enter the day of the month you want to remove a task from: ";
					cin>>day;
					if(oct[day-1] == " "){
						cout<<"Sorry! you already have no task registered for day "<<day<<" of October: "<<endl;
					}
					else{
						oct[day-1] = " ";	
					}
					break;
				case 11:
					cout<<"Enter the day of the month you want to remove a task from: ";
					cin>>day;
					if(nov[day-1] == " "){
						cout<<"Sorry! you already have no task registered for day "<<day<<" of November: "<<endl;
					}
					else{
						nov[day-1] = " ";	
					}
					break;
				case 12:
					cout<<"Enter the day of the month you want to remove a task from: ";
					cin>>day;
					if(dec[day-1] == " "){
						cout<<"Sorry! you already have no task registered for day "<<day<<" of December: "<<endl;
					}
					else{
						dec[day-1] = " ";	
					}
					break;
			}	
		}	
};

int main(){
	Planner p1;
	int option,flag;
	flag = 1;
	while(flag == 1){
		cout<<"Enter 1 for displaying all the tasks, 2 for adding a task, or 3 for removing a task: ";
		cin>>option;
		switch(option){
			case 1:
				p1.display();
				break;
			case 2:
				p1.add();
				break;
			case 3:
				p1.remove();
				break;		
		}
	}
	return 0;
}
