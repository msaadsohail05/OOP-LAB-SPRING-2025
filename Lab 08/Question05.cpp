//Muhammad Saad Sohail  24K-0549

#include<iostream>
#include<string>

using namespace std;

class Fraction{
	public:
		int numerator;
    	int denominator;
    	
		Fraction(int n,int d){
			if(d == 0){
            cout << "Denominator cannot be zero. Defaulting to 1."<<endl;
            d = 1;
        	}
        	numerator = n;
       	 	denominator = d;
       	 	if (denominator < 0){
	            numerator *= -1;
	            denominator *= -1;
	        }
		}
		
		Fraction operator+(const Fraction &other) const {
	        int n = numerator * other.denominator + other.numerator * denominator;
	        int d = denominator * other.denominator;
	        return Fraction(n, d);
   		}

	    Fraction operator-(const Fraction &other) const {
	        int num = numerator * other.denominator - other.numerator * denominator;
	        int denom = denominator * other.denominator;
	        return Fraction(num, denom);
	    }
	
	    Fraction operator*(const Fraction &other) const {
	        int num = numerator * other.numerator;
	        int denom = denominator * other.denominator;
	        return Fraction(num, denom);
	    }
	
	    Fraction operator/(const Fraction &other) const {
	        int num = numerator * other.denominator;
	        int denom = denominator * other.numerator;
	        return Fraction(num, denom);
	    }

	    friend ostream& operator<<(ostream &out, const Fraction &f) {
	        out << f.numerator << "/" << f.denominator;
	        return out;
	    }
};

int main() {
    Fraction f1(3, 4);
    Fraction f2(2, 5);
    cout << "Fraction 1: " << f1 << endl;
    cout << "Fraction 2: " << f2 << endl;
    Fraction sum = f1 + f2;
    Fraction diff = f1 - f2;
    Fraction prod = f1 * f2;
    Fraction quot = f1 / f2;
    cout<<"Sum: " <<sum<<endl;
    cout<<"Difference: "<<diff<<endl;
    cout<<"Product: "<<prod<<endl;
    cout<<"Quotient: "<<quot<<endl;

    return 0;
}
