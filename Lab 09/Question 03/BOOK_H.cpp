//Muhammad Saad Sohail    24K-0549

#include "BOOK_H.hpp"
#include "iostream"
#include "string.h"

using namespace std;
Book::Book(){
  title =" ";
  author = " ";
  ISBN = " ";
}
Book::Book(string t,string a,string i): title(t), author(a), ISBN(i) {}
string Book:: getTitle(){
	return title;
}
string Book:: getAuthor(){
  	return author;
}
string Book:: getISBN(){
  	return ISBN;
}
void Book::setTitle(string s){
  title = s;
}
void Book::setAuthor(string a){
  author = a;
}
void Book::setISBN(string i){
  ISBN = i;
}
Library::Library(){
	count = 0;
  for(int i=0;i<20;i++){
    books[i] = nullptr;
}

}
void Library:: addBook(Book& b1){
	if(count<20){
      books[count] = new Book();
    	books[count]->setTitle(b1.getTitle());
      books[count]->setAuthor(b1.getAuthor());
      books[count]->setISBN(b1.getISBN());
    	count++;
  	}
  	else{
    	cout<<"No space left to add another book!"<<endl;
  	}
}

void Library:: removeBook(Book& b1){
    int flag=0;
    for(int i=0;i<count;i++){
      if(books[i]->getISBN() == b1.getISBN()){
        delete books[i];
        for(int j = i; j < count - 1; j++){
          books[j] = books[j + 1];
      }
        count--;
        cout<<"Book removed!"<<endl;
        flag =1;
        break;
      }  
    }
  if(flag == 1){
    cout<<"Book "<<b1.getTitle()<<" has been removed!"<<endl;
  }
  else{
    cout<<"Book "<<b1.getTitle()<<" was not found!"<<endl;
  }
}

void Library:: searchBook(Book &b1){
	int flag=0;
    for(int i=0;i<count;i++){
        if(books[i]->getISBN() == b1.getISBN()){
          flag =1;
        }  
    }
    if(flag == 1){
    	cout<<"Book "<<b1.getTitle()<<" has been found!"<<endl;
  	}
  	else{
    	cout<<"Book "<<b1.getTitle()<<" was not found!"<<endl;
  	}
}
Library::~Library(){
  for(int i=0;i<count;i++){
    delete books[i];
  }
}
