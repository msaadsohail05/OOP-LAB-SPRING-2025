//Muhammad Saad Sohail  24K-0549

#include<iostream>
#include<string>

using namespace std;

class Currency{
	public:
		float amount;
		Currency(float a) : amount(a){}
		Currency operator+(const Currency &other) const {
        	return Currency(amount + other.amount);
    	}
		Currency operator-(const Currency &other) const {
        	return Currency(amount - other.amount);
   	 	}
	    Currency operator-() const {
	        return Currency(-amount);
	    }
	    Currency& operator+=(const Currency &other) {
	        amount += other.amount;
	        return *this;
	    }
	
	    Currency& operator-=(const Currency &other) {
	        amount -= other.amount;
	        return *this;
	    }
	
	    friend ostream& operator<<(ostream &out, const Currency &c) {
	        out << "$" << c.amount;
	        return out;
	    }
			
};

int main() {
    Currency price(1500.0);
    Currency discount(200.0);
    Currency tax(150.0);

    cout << "Original Price: " << price << endl;
    cout << "Discount: " << discount << endl;

    Currency finalPrice = price - discount;
    cout << "After Discount: " << finalPrice << endl;

    finalPrice += tax;
    cout << "After Adding Tax: " << finalPrice << endl;

    Currency neg = -discount;
    cout << "Negated Discount: " << neg << endl;

    finalPrice -= Currency(50.0);
    cout << "After Applying Coupon: " << finalPrice << endl;
}
