// Muhammad Saad Sohail  24K-0549

#include<iostream>
#include<string.h>

using namespace std;

class Device{
	public:
	int deviceID;
	bool status;
	Device(int i,bool s) : deviceID(i) , status(s) {}
	virtual void displayDetails(){
		cout<<"Device ID: "<<deviceID<<endl;
		cout<<"Status: "<<status<<endl;
	}
};

class SmartPhone : virtual public Device{
	public:
		float screenSize;
		SmartPhone(int i,bool s,float ss) : Device(i,s) , screenSize(ss) {}
		void displayDetails()override{
			cout<<"Displaying Phone Details: "<<endl;
			cout<<"Device ID: "<<deviceID<<endl;
			cout<<"Status: "<<status<<endl;
			cout<<"Screen Size"<<screenSize<<endl;
		}
};

class SmartWatch : virtual public Device{
	public:
		bool heartRateMonitor;
		SmartWatch(int i,bool s,bool hrm):Device(i,s), heartRateMonitor(hrm) {}
		void displayDetails()override{
			cout<<"Displaying Smart Watch Details: "<<endl;
			cout<<"Device ID: "<<deviceID<<endl;
			cout<<"Status: "<<status<<endl;
			cout<<"heart Rate Monitor: "<<heartRateMonitor<<endl;
		}
	
};

class SmartWearable: public SmartPhone , public SmartWatch{
	public:
		int stepCounter;
		SmartWearable(int i,bool s,float ss,bool hrm) : Device(i,s)	, SmartPhone(i,s,ss) , 	SmartWatch(i,s,hrm) {}
		void displayDetails()override{
			cout<<"Displaying Smart Wearable Details: "<<endl;
			cout<<"Device ID: "<<deviceID<<endl;
			cout<<"Status: "<<status<<endl;
			cout<<"Screen Size"<<screenSize<<endl;
			cout<<"heart Rate Monitor: "<<heartRateMonitor<<endl;
		}
};

int main(){
	
	int id;
	float screen;
	bool st,rate;
	cout<<"Enter the Device ID: ";
	cin>>id;
	cout<<"Enter Status(1 for True or 2 for False): ";
	cin>>st;
	cout<<"Enter Screen Size: ";
	cin>>screen;
	cout<<"Enter Heart Rate Monitor(True or False): ";
	cin>>rate;
	SmartWearable sw(id,st,screen,rate);
	sw.displayDetails();
	return 0;
}
