//Muhammad Saad Soahil      24K-0549


#include <iostream>
#include <exception>
#include <string>

using namespace std;

class FileException : public exception{
public:
    virtual const char* what() const noexcept{
        return "FileException";
    }
};

class FileNotFoundException : public FileException{
public:
    const char* what() const noexcept override{
        return"FileNotFoundException - File not found!";
    }
};

class PermissionDeniedException : public FileException{
public:
    const char* what() const noexcept override{
        return "PermissionDeniedException - Access denied!";
    }
};

void readFile(const string& filename){
    if(filename == "missing.txt"){
      throw FileNotFoundException();
    }
    if (filename == "secret.txt"){
      throw PermissionDeniedException();
    }
    cout<<"Reading '"<<filename<<"' succeeded."<<endl;
}

int main(){
    string file = "secret.txt";
    try{
        readFile(file);
    } 
    catch(PermissionDeniedException& e){
        cout<<"Reading '"<<file<< "': "<<e.what()<<endl;
    }
    catch(FileNotFoundException& e){
        cout<<"Reading '"<<file<<"': "<<e.what()<<endl;
    }
    catch(FileException& e){
        cout<<"File error: "<<e.what()<<endl;
    }
    return 0;
}
