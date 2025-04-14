#ifndef Book
#define Book

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
    int count;
    Library(int c): count(c){}
    Book books[20];
    void addBook(Book& b1) = 0;
    void removeBook(Book& b1)=0;
    void searchBook(Book& b1)=0;
};

#endif

