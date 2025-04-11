//Muhammad Saad Sohail  24K-0549

#include<iostream>
#include<string>

using namespace std;

class Student{
	public:
		string name;
		int grades[3];
		Student(string n,int g1,int g2,int g3){
        name = n;
        grades[0] = g1;
        grades[1] = g2;
        grades[2] = g3;
    	}
    	void displayGrades(){
	        cout<<"Grades for "<<name<<": ";
	        for(int i=0;i<3;i++){
	            cout<<grades[i]<<" ";
	        }
	        cout << endl;
    	}
		
		friend class Teacher;
		friend float calculateAverageGrade(Student s); 
};

class Teacher{
	public:
		void updateGrade(Student &s,int i,int n){
	        if(i>=0 && i<3){
	            s.grades[i] = n;
	            cout<<"Grade "<<i + 1<<"updated."<<endl;
	        } 
			else{
	            cout<<"Invalid grade index!"<<endl;
	        }
	    }
	    void viewGrades(Student &s) {
	        s.displayGrades();
	    }
};

float calculateAverageGrade(Student s){
    int total = 0;
    for(int i=0;i<3;i++){
        total += s.grades[i];
    }
    return (total / 3);
}

int main() {
    Student student1("Ali", 75, 82, 68);
    Teacher teacher1;
    teacher1.viewGrades(student1);
    cout << "Average Grade: " <<calculateAverageGrade(student1)<<endl;
    teacher1.updateGrade(student1, 1, 90);

    teacher1.viewGrades(student1);
    cout << "New Average Grade: " << calculateAverageGrade(student1) << endl;

    return 0;
}
