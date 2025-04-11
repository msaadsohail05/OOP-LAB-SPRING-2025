//Muhammad Saad Sohail  24K-0549

#include<iostream>
#include<string>

using namespace std;
class Humidity;
class Temperature{
	private:
		int temp;
	public:
		Temperature(int t) : temp(t) {}
		friend void calculateHeatIndex(Temperature &t,Humidity &h);
		int GetTemp(){
			return temp;
		}
		void SetTemp(int t){
			temp = t;
		}	
};

class Humidity{
	private:
		int hum;
	public:
		Humidity(int h) : hum(h) {}
		friend void calculateHeatIndex(Temperature &t,Humidity &h);
		int GetHum(){
			return hum;
		}
		void SetHum(int h){
			hum = h;
		}	
};

void calculateHeatIndex(Temperature &t,Humidity &h){
	float HI;
	int x= t.GetTemp();
	x = x * 9/5 + 32;
	int RH;
	RH = h.GetHum();
	HI = -42.379 + 2.04901523*x + 10.14333127*RH - 0.22475541*x*RH - (6.83783/1000)*x*x -(5.481717/100)*RH*RH + (1.22874/1000)*x*x*RH 
     + (8.5282/10000)*x*RH*RH - (1.99/1000000)*x*x*RH*RH;
     float HI_C = (HI - 32) * 5.0 / 9.0;
    cout<<"Heat Index: "<<HI_C<<endl;	
}

int main(){
	Temperature t1(32);
	Humidity h1(70);
	calculateHeatIndex(t1,h1);
}
