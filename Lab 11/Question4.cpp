// Muhammad Saad Sohail      24K-0549

#include <iostream>
#include <cmath>
#include <exception>
#include <string>

using namespace std;

class NegativeNumberException : public exception{
public:
    const char* what() const noexcept override{
        return "NegativeNumberException - Input must be non-negative!";
    }
};

class InvalidTypeException : public exception{
public:
    const char* what() const noexcept override{
        return "InvalidTypeException - Non-numeric type detected!";
    }
};

template<typename T>
double sqrtValue(T num){
    throw InvalidTypeException();
}

double sqrtValue(int num){
    if (num < 0){
      throw NegativeNumberException();
    }
    return sqrt(num);
}

double sqrtValue(double num){
    if (num < 0){
      throw NegativeNumberException();
    }
    return sqrt(num);
}

int main(){
    try{
        cout << "sqrt(-4): ";
        cout << sqrtValue(-4) << endl;
    }
    catch(exception& e){
        cout<<e.what()<<endl;
    }

    try{
        cout<<"sqrt(\"hello\"): ";
        cout<<sqrtValue(string("hello"))<<endl;
    }
    catch(exception& e){
        cout<<e.what()<<endl;
    }

    return 0;
}
