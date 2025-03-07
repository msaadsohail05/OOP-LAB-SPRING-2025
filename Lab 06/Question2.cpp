#include<iostream>
#include<string.h>

using namespace std;

class Vehicle{
    public:
        string brand;
        int speed;
        Vehicle(string b,int s) : brand(b) , speed(s){}
        void displayDetailsy(){
            cout<<"Brand: "<<brand<<endl;
            cout<<"Speed: "<<speed<<endl; 
        }
};

class Car : public Vehicle{
    public:
        int seats;
        Car(string b,int s,int se) : Vehicle(b,s) , seats(se){}
        void displayDetailsy(){
            cout<<"Brand: "<<brand<<endl;
            cout<<"Speed: "<<speed<<endl;
            cout<<"Seats: "<<seats<<endl;
        }
};

class ElectricCar : public Car{
    public:
        int batteryLife;
        ElectricCar(string b,int s,int se,int bl):Car(b,s,se),batteryLife(bl){}
        void displayDetailsy(){
            cout<<"Brand: "<<brand<<endl;
            cout<<"Speed: "<<speed<<endl;
            cout<<"Seats: "<<seats<<endl;
            cout<<"Battery Life: "<<batteryLife<<endl;
        }
};

int main(){
	ElectricCar e1("Mustang",300,2,2);
	e1.displayDetailsy();
}
