#ifndef Book
#define Book

class Book{
  protected:
    string title,author,ISBN;
  public:
    Book();
    Book(string t,string a,string i);
    void getTitle()=0;
    void getAuthor()=0;
    void getISBN()=0;
};

class Library: public Book{
  public:
    Book books[10];
    void addBook() = 0;
    void removeBook()=0;
    void searchBook()=0;
};

#endif

