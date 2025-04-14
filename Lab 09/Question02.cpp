//Muhammad Saad Sohail    24K-0549

#include<iostream>
#include<string>

using namespace std;

class SmartDevice{
	public:			 
		virtual void turnOn() =0;
    virtual void turnOff() =0;
    virtual bool getStatus() =0;
		virtual ~SmartDevice(){}
};

class LightBulb : public SmartDevice{
  protected:
    bool isOn;
    int brightness;
  public:
    LightBulb(bool i, int b): isOn(i), brightness(b){}
    void turnOn(){
      cout<<"Turning on the light!"<<endl;
    }
    void turnOff(){
      cout<<"Turning off the light!"<<endl;
    }
    bool getStatus(){
      return isOn;
    } 
};

class Thermostat : public SmartDevice{
  protected:
    bool isOn;
    double temperature;
  public:
    Thermostat(bool i, double d): isOn(i),temperature(d) {}
    void turnOn(){
      cout<<"Turning on the Thermostat!"<<endl;
    }
    void turnOff(){
      cout<<"Turning off the Thermostat!"<<endl;
    }
    bool getStatus(){
      return isOn;
    } 
};

int main(){
SmartDevice* l1 = new  LightBulb(0,60);
SmartDevice* t1 = new  LightBulb(1,6.0);
l1-> turnOn;
cout<<"Status of thermostat: "<<t1->getStatus<<endl;  
return 0;
}
