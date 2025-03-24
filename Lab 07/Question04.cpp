// Muhammad Saad Sohail  24K-0549

#include<iostream>
#include<string>

using namespace std;

class Person{
	public:
		string name;
		int id;
		string address;
		int phoneNumber;
		string email;
		
		Person(string n, int i, string a, int p, string e): name(n), id(i), address(a), phoneNumber(p), email(e){}
		virtual void displayInfo(){
			cout<<"Name: "<<name<<endl;
			cout<<"ID: "<<id<<endl;
			cout<<"Address: "<<address<<endl;
			cout<<"Phone Number: "<<phoneNumber<<endl;
			cout<<"Email: "<<email<<endl;
		}
		void updatelnfo(){
			cout<<"Updating info!"<<endl;
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter ID: ";
			cin>>id;
			cout<<"Enter Address";
			cin>>address;
			cout<<"Enter Phone Number: ";
			cin>>phoneNumber;
			cout<<"Enter Email";
			cin>>email;
		}
};

class Student: public Person{
	public:
		string coursesEnrolled[10];
    	int numCourses;
		float GPA;
		int enroLLmentYear;
		Student(string n, int i, string a, int p, string e,float g,int ey): Person(n,i,a,p,e), numCourses(0), GPA(g), enroLLmentYear(ey){}
		
		void displayInfo(){
			Person::displayInfo();
			cout<<"Courses Enrolled: ";
	        for(int i=0;i<numCourses;i++){
	            cout<<coursesEnrolled[i]<<" ";
	        }
        	cout << endl;
			cout<<"GPA: "<<GPA<<endl;
			cout<<"Enrollment Year: "<<enroLLmentYear<<endl;
		}
		void registerForCourse(const string& courseName){
	        if(numCourses<10){
	            coursesEnrolled[numCourses++] = courseName;
	            cout<<name<<" has successfully enrolled in the course: "<<courseName<<endl;
	        }
			else{
	            cout<<"Unable to register for more courses, max limit reached!"<<endl;
	        }
	    }		
};

class Professor: public Person{
	public:
		string coursesTaught[10];
    	int numCoursesTaught; 
		string department;
		double salary;
		
		Professor(string n, int i, string a, int p, string e,string dep, double s) :  Person(n,i,a,p,e),  department(dep), numCoursesTaught(0), salary(s){}
		
		void displayInfo(){
			Person::displayInfo();
			cout<<"Department: "<<department<<endl;
			cout << "Courses Taught: ";
        	for(int i=0;i<numCoursesTaught;i++){
            	cout<<coursesTaught[i]<<" ";
        	}
        	cout << endl;
			cout<<"Salary: "<<salary<<endl;
		}
		void addCourse(const string& course){
	        if(numCoursesTaught <10) {
	            coursesTaught[numCoursesTaught++] =course;
	            cout<<name<<" is now teaching the course: "<< course<<endl;
	        }
			else{
	            cout<<"Unable to add more courses, max limit reached!"<<endl;
	        }
    	}
};

class Staff : public Person{
	public:
		string department;
		string position;
		double salary; 
		Staff(string n, int i, string a, int p, string e, string de, string pos,double sa) :  Person(n,i,a,p,e),  department(de), position(pos), salary(sa){}
		
		void displayInfo(){
			Person::displayInfo();
			cout<<"Department: "<<department<<endl;
			cout<<"Position: "<<position<<endl;
			cout<<"Salary: "<<salary<<endl;
		}
};

class Course{
	public:
		int courseId;
		string courseName;
		int credits;
		string instructor;
		string schedule;
		
		Course(int id,string name, int c, string i, string sc)  : courseId(id), courseName(name), credits(c), instructor(i), schedule(sc) {}
		
		void displaydetails(){
			cout<<"Course ID: "<<courseId<<endl;
			cout<<"Course Name: "<<courseName<<endl;
			cout<<"Credits: "<<credits<<endl;
			cout<<"Instructor: "<< instructor<<endl;
			cout<<"Schedule: "<<schedule<<endl;
		}
		void registerStudent(Student& student){
        	student.registerForCourse(courseName);
    	}

	    void calculateGrades(){
	        cout<<"Calculating grades for "<<courseName<<endl;
	    }
};

int main(){
    Student student1("John Doe", 123, "123 Elm St", 5551234, "john.doe@example.com", 3.8, 2023);
    Professor prof1("Dr. Smith", 456, "456 Oak St", 5555678, "dr.smith@example.com", "Computer Science", 85000);
    Staff staff1("Jane Doe", 789, "789 Pine St", 5558765, "jane.doe@university.com", "Administration", "Secretary", 45000);

    
    cout << "Student Info:" << endl;
    student1.displayInfo();
    cout << endl;

    cout << "Professor Info:" << endl;
    prof1.displayInfo();
    cout << endl;

    cout << "Staff Info:" << endl;
    staff1.displayInfo();
    cout << endl;

    Course course1(101, "Introduction to Programming", 3, "Dr. Smith", "MWF 10:00-11:30");
    course1.displaydetails();
    course1.registerStudent(student1);
    course1.calculateGrades(); 
    cout << endl;
    student1.displayInfo();
	return 0;
}
