
//Muahammad Saad Sohail  24K-0549

#include <iostream>
#include<string.h>
using namespace std;

class TourGuide{
	private:
	    string name;
	    int YearsOfExperience;
	    string specialization;
	
	public:
	    TourGuide(){
	        name = " ";
	        YearsOfExperience = 0;
	        specialization = " ";
	    }
	
	    TourGuide(string n,int e,string exp){
	        name = n;
	        YearsOfExperience = e;
	        specialization = exp;
	    }
	
	    string getname(){
			return name;
		}
	    string GetSpecialization(){
			return specialization;
		}
	    int getExperience(){
			return YearsOfExperience;
		}
};

class TravelAgency{
	private:
	    string AgencyName;
	    TourGuide *GuideList;
	    int NumTourGuides;
	    int capacity = 100;
	
	public:
	    TravelAgency(){
	        AgencyName = " ";
	        NumTourGuides = 0;
	        GuideList = new TourGuide[capacity];
	    }
	
	    TravelAgency(string name){
	        AgencyName = name;
	        NumTourGuides = 0;
	        GuideList = new TourGuide[capacity];
	    }
	
	    void addTourGuide(TourGuide &newTourGuide){
	        if (NumTourGuides<capacity){
	            GuideList[NumTourGuides] = newTourGuide;
	            NumTourGuides++;
	        }
	        else{
	            cout<<"Cannot add more TourGuides."<<endl;
	        }
	    }
	
	    void showDetails(){
	        cout<<"Agency Name: "<<AgencyName<<endl;
	        cout<<"Number of Tour Guides Available: "<<NumTourGuides<<endl;
	        for(int i=0;i<NumTourGuides;i++){
	            cout<<"Tour Guide Number: "<<i + 1<<endl;
	            cout<<"Name: "<<GuideList[i].getname()<<endl;
	            cout<<"Experience: "<<GuideList[i].getExperience()<<endl;
	            cout<<"Specialization: "<<GuideList[i].GetSpecialization()<< endl;
	        }
	    }
	
	    ~TravelAgency(){
	        delete[] GuideList;
	    }
};

int main(){
    TravelAgency Agency1("VM Travellers");

    TourGuide T1("Saad",7,"Hiking");
    TourGuide T2("Zaid",10,"Trekking");
    TourGuide T3("Jack", 4, "Hiking");

    Agency1.addTourGuide(T1);
    Agency1.addTourGuide(T2);
    Agency1.addTourGuide(T3);
    Agency1.showDetails();

    return 0;
}

