//Muahammad Saad Sohail  24K-0549

#include <iostream>
#include<string.h>
using namespace std;

class Movie{
	private:
		string title;
		string director;
		int duration;
	public:
		Movie(){
			title = " ";
			director = " ";
			duration = 0;
		}
		Movie(string t, string d, int du){
			title = t;
			director = d;
			duration = du;
		}
		string GetTitle(){
			return title;
		}
		string GetDirector(){
			return director;
		}
		int GetDuration(){
			return duration;   
		}
		void display(){
			cout<<"Title: "<<title<<"  ";
			cout<<"Director: "<<director<<"  ";
			cout<<"Duration: "<<duration<<"  ";
		}	
};

class CinemaHall{
	private:
		Movie* movies;
		string name;
		int capacity;
		int current;
	public:
		CinemaHall(){
			movies = nullptr;
			name = " ";
			capacity = 0;
			current = 0;
		}
		CinemaHall(string n,int c){
			name = n;
			capacity = c;
			current = 0;
			movies = new Movie[capacity];
		}
		void addmovie(Movie &m1){
			if(current<capacity){
				movies[current] = m1;
				current++;
			}
			else{
				cout<<"Cannot Add more movies"<<endl;
			}
		}
		void CinemaDisplay(){
			cout<<"Name: "<<name<<endl;
			cout<<"Capacity: "<<capacity<<endl;
			cout<<"Current Number of seats booked: "<<current<<endl;
			cout<<"Displaying Movies:-"<<endl;
			for(int i=0;i<capacity;i++){
				movies[i].display();
				cout<<endl;
			}
		}
		~CinemaHall(){
			delete [] movies;
		}	
};

int main(){
	CinemaHall c1("Six Sigma",8);
	
	Movie m1("Oppenheimer","Christopher Nolan",182);
	Movie m2("Dunkirk","Christopher Nolan",200);
	
	c1.addmovie(m1);
	c1.addmovie(m2);
	
	c1.CinemaDisplay();
	return 0;
}
