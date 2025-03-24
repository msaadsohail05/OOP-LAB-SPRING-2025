//Muhammad Saad Sohail  24K-0549

#include<iostream>
#include<string.h>

using namespace std;

class Shape{
	public:
		int position;
		string color;
		int BorderThickness;		
		Shape(int p,string c,int bt) : position(p), color(c), BorderThickness(bt){}
		void draw(){
			cout<<"Drawing the shape"<<endl;
		}
		void CalculateArea(){
			cout<<"Calculating Area!"<<endl;	
		}
		void calculatePerimeter(){
			cout<<"Calculating perimeter!"<<endl;
		}
};

class Circle : public Shape{
	public:
		int radius;
		int centre;
		Circle(int p,string c,int bt,int r, int cen) : Shape(p,c,bt), radius(r), centre(cen) {}
		void draw(){
			cout<<"Drawing Circle!"<<endl;
		}
		float CalculateArea(){
			return (3.142*radius*radius);	
		}
		float calculatePerimeter(){
			return(2*3.142*radius);
		}	
};

class Rectangle : public Shape{
	public:
		int	width;
		int height;
		int topLeftCorner;
		
		Rectangle(int p,string c,int bt, int w,int h, int tlc): Shape(p,c,bt), width(w), height(h),topLeftCorner(tlc){}
		void draw(){
			cout<<"Drawing Rectangle"<<endl;
		}
		int CalculateArea(){
			return width*height;	
		}
		int calculatePerimeter(){
			return 2*(width + height);
		}		 
};

int main() {
    Circle c(1, "Red", 2, 5, 0);
    Rectangle r(2, "Blue", 3, 4, 6, 0);

    c.draw();
    cout << "Circle Area: " << c.CalculateArea() << endl;
    cout << "Circle Perimeter: " << c.calculatePerimeter() << endl;

    r.draw();
    cout << "Rectangle Area: " << r.CalculateArea() << endl;
    cout << "Rectangle Perimeter: " << r.calculatePerimeter() << endl;

    return 0;
}
