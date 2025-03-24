// Muhammad Saad Sohail  24K-0549

#include<iostream>
#include<string>

using namespace std;

class Media{
	public:
		string title;
		string publicationDate;
		int uniquelD;
		string publisher;
		bool isCheckedOut;
		Media(string t,string p,int id,string pu): title(t), publicationDate(p), uniquelD(id), publisher(pu),isCheckedOut(false){}
		
		virtual void displayInfo(){
			cout<<"ID: "<<uniquelD<<endl;
			cout<<"Title: "<<title<<endl;
			cout<<"Publication Date: "<<publicationDate<<endl;
			cout<<"Publisher: "<<publisher<<endl;
			cout<<"Status: "<<(isCheckedOut ?"Checked Out":"Available")<<endl;
		}
		void checkOut(){
			cout<<"Checking out.."<<endl;
			if (!isCheckedOut){
            	isCheckedOut = true;
            	cout<<title<<" has been checked out successfully."<<endl;
        	} 
			else{
            	cout<<title<<" is already checked out."<<endl;
        	}
		}
		void returnItem(){
			if (isCheckedOut) {
	            isCheckedOut = false;
	            cout<<title<<" has been returned successfully."<<endl;
	        }
			else{
	            cout<<title<<" was not checked out." <<endl;
	        }
		}
		bool matches(string searchTitle){
			return title == searchTitle;
		}
    	bool matches(int searchYear){
			return stoi(publicationDate.substr(0, 4)) == searchYear;
		} 	
};

class Book: public Media{
	public:
		string author;
		int ISBN;
		int NumPages; 
		Book(string t,string p,int id,string pu,string a,int i,int n): Media(t,p,id,pu),author(a), ISBN(i),NumPages(n){}
		
		void displaylnfo(){
			Media::displayInfo();
			cout<<"Author: "<<author<<endl;
			cout<<"ISBN: "<<ISBN<<endl;
			cout<<" Number of Pages: "<<NumPages<<endl;
		}	
};

class DVD : public Media{
	public:
		string director;
		float duration;
		float rating;
		DVD(string t,string p,int id,string pu,string d,float du, float r): Media(t,p,id,pu), director(d), duration(du), rating(r){}
		
		void displaylnfo(){
			Media::displayInfo();
			cout<<"Director: "<<director<<endl;
			cout<<"Duration: "<<duration<<endl;
			cout<<"Rating: "<<rating<<endl;
		}			
};

class CD : public Media{
	public:
		string artist;
		int NumTracks;
		string genre;
		CD(string t,string p,int id,string pu,string a,int n,string g) : Media(t,p,id,pu), artist(a), NumTracks(n),genre(g){}
		
		void displaylnfo(){
			Media::displayInfo();
			cout<<"Artist: "<<artist<<endl;
			cout<<"Number of Tracks: "<<NumTracks<<endl;
			cout<<"Genre: "<<genre<<endl;
		}		  
};

void searchByTitle(Media* library[], int size, string title) {
    for(int i=0;i<size;i++){
        if(library[i]->matches(title)) {
            cout<<"Media found:"<<endl;
            library[i]->displayInfo();
            return;
        }
    }
    cout<<"No media found with title: "<<title<<endl;
}

void searchByYear(Media* library[], int size, int year) {
    for(int i=0;i<size;i++) {
        if(library[i]->matches(year)) {
            cout<<"Media found:"<<endl;
            library[i]->displayInfo();
            return;
        }
    }
    cout<<"No media found from the year: "<<year<<endl;
}

int main() {
    const int LIBRARY_SIZE = 3;
    Media* library[LIBRARY_SIZE];

    library[0] = new Book("The Great Gatsby", "1925", 101, "Scribner", "F. Scott Fitzgerald", 9780743273565, 180);
    library[1] = new DVD("Inception", "2010", 102, "Warner Bros.", "Christopher Nolan", 2.8, 4.8);
    library[2] = new CD("Thriller", "1982", 103, "Epic Records", "Michael Jackson", 9, "Pop");

    cout<<"Library Collection"<<endl;
    for(int i=0;i<LIBRARY_SIZE;i++) {
        library[i]->displayInfo();
        cout<<endl;
    }

    cout<<"Checking out 'The Great Gatsby'"<<endl;
    library[0]->checkOut();

    cout<<"Trying to check out 'The Great Gatsby' again"<<endl;
    library[0]->checkOut();

    cout<<"Returning 'The Great Gatsby'"<<endl;
    library[0]->returnItem();

    cout<<"Searching for a book titled 'The Great Gatsby'"<<endl;
    searchByTitle(library, LIBRARY_SIZE, "The Great Gatsby");

    cout <<"Searching for media from the year 2010"<<endl;
    searchByYear(library, LIBRARY_SIZE, 2010);

    for(int i=0;i<LIBRARY_SIZE;i++){
        delete library[i];
    }
    return 0;
}

