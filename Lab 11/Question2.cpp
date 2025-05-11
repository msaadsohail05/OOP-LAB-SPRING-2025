// Muhammad Saad Sohail       24K-0549


#include <iostream>
#include <exception>
using namespace std;

struct StackOverflowException : exception {
    const char* what() const noexcept override{
        return "StackOverflowException - Stack is full!";
    }
};

struct StackUnderflowException : exception{
    const char* what() const noexcept override {
        return "StackUnderflowException - Stack is empty!";
    }
};

template <class T>
class Stack{
    T* items;
    int size;
    int index;

public:
    Stack(int s) : size(s), index(-1){
        items = new T[size];
    }

    ~Stack(){
        delete[] items;
    }

    void push(T val){
        if(index >= size - 1){
          throw StackOverflowException();
        }
        items[++index] = val;
    }

    T pop(){
        if(index < 0){
          throw StackUnderflowException();
        }
        return items[index--];
    }
};

int main(){
    Stack<int> s(2);
    try{
        s.push(1);
        s.push(2);
        s.push(3);
    } 
    catch (const exception& ex){
        cout << ex.what() << endl;
    }

    try{
        s.pop();
        s.pop();
        s.pop();
    } 
    catch (const exception& ex){
        cout<<ex.what()<<endl;
    }

    return 0;
}
