//Muhammad Saad Sohail        24K-0549


#include <iostream>
#include <exception>

using namespace std;

struct InvalidValueException : exception {
    const char* what() const noexcept override {
        return "InvalidValueException - Age cannot be negative or exceed 120.";
    }
};

void validate(int age){
    if(age<0||age>120){
      throw InvalidValueException();
    } 
}

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;
    try{
        validate(age);
        cout << "Accepted age: " << age << endl;
    } 
    catch (const exception& ex){
        cout << "Error: " << ex.what() << endl;
    }
    return 0;
}
