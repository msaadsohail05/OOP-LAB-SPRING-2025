//Muhammad Saad Sohail    24K-0549

#include<Book.h>
#include<iostream>

using namespace std;
Book::Book(){
  title =" ";
  author = " ";
  ISBN = " ";
}
Book::Book(string t,string a,string i): title(t), author(a), ISBN(i) {}
Book::string getTitle(){
  return title;
}
Book::string getAuthor(){
  return author;
}
Book::string getISBN(){
  return ISBN;
}




class Book{
  protected:
    string title,author,ISBN;
  public:
    Book();
    Book(string t,string a,string i);
    string getTitle()=0;
    string getAuthor()=0;
    string getISBN()=0;
};

class Library: public Book{
  public:
    Book books[10];
    void addBook() = 0;
    void removeBook()=0;
    void searchBook()=0;
};
