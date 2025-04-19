#ifndef BookH
#define BookH
#include<string.h>
#include<iostream>

using namespace std;

class Book{
  protected:
    string title,author,ISBN;
  public:
    Book();
    Book(string t,string a,string i);
    string getTitle();
    string getAuthor();
    string getISBN();
    void setTitle(string s);
    void setAuthor(string a);
    void setISBN(string i);
};

class Library: public Book{
  public:
    int count;
    Library();
    Book* books[20];
    void addBook(Book& b1);
    void removeBook(Book& b1);
    void searchBook(Book& b1);
    ~Library();
};

#endif
