// Muhammad Saad Sohail  24K-0549

#include<iostream>
#include<string>

using namespace std;

class Currency{
	public:
		double amount;
		int currencyCode;
		char currencySymbol;
		float exchangeRate;
		
		Currency(double a, int cc, char cs, float rate) : amount(a), currencyCode(cc), currencySymbol(cs), exchangeRate(rate) {}
		virtual double convertToBase(){
			cout<<"Converting Currency to base!"<<endl;
			return amount * exchangeRate;
		}
		double convertTo(Currency& targetCurrency){
			double baseValue = convertToBase();
        	return baseValue / targetCurrency.exchangeRate;
		}
		virtual void displayCurrency(){
			cout<<"Displaying Currency Details!"<<endl;
			cout<<"Currency Code: "<<currencyCode<<endl;
			cout<<"Currency Symbol: "<<currencySymbol<<endl;
			cout<<"Exchange Rate: "<<exchangeRate<<endl;			
		}   	
};

class Dollar: public Currency{
	public:
		 Dollar(double a) : Currency(a, 840, '$', 1.0) {}
		double convertToBase(){
			return amount;
		}
		void displayCurrency(){
			Currency::displayCurrency();
			
		}
};

class Euro: public Currency{
	public:
		Euro(double a) : Currency(a, 978, '€', 1.1){}
			
			double convertToBase(){
        		return amount * exchangeRate;
    	}
		void displayCurrency(){
			Currency::displayCurrency();
		}
};

class Ruppee: public Currency{
	public:
		Ruppee(double a) : Currency(a, 356, '₹',0.012){}
		double convertToBase(){
			return amount * exchangeRate;
		}
		void displayCurrency(){
			Currency::displayCurrency();
		}
};

int main(){
	Dollar usd(100);
    Euro eur(50);
    Ruppee inr(5000);

    cout << "Displaying Initial Currencies:\n";
    usd.displayCurrency();
    eur.displayCurrency();
    inr.displayCurrency();

    cout << "\nConversions:\n";
    cout << "50 EUR to USD: " << eur.convertTo(usd) << " USD"<<endl;
    cout << "5000 INR to USD: " << inr.convertTo(usd) << " USD"<<endl;
    cout << "100 USD to EUR: " << usd.convertTo(eur) << " EUR"<<endl;
	return 0;
}
