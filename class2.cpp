#include <cstdlib> 
#include <iostream> 
#include <string> 
#include <vector> 
#include <ctime> 
#include <numeric> 
#include <cmath> 


class Shape()
{
    protected: 
        double height; 
        double width; 

    public: 
        Shape(double length){
            height = length;
            width = length; 

        }
        Shape(double h, double w){
            height = h; 
            width = w; 
        }
        virtual double Area(){
            return height * width; 
        }
}; 
class Circle : public Shape {
 public: 
        Circle(double W ) : 
        Shape( W ){

        }
        double Area() {
            return 3.14159  * std::pow((width / 2), 2 );
        }
}

void ShowArea (Shape& shape) {
    std:: cout << " Area:  " << shape.Area(); 

}

int main()
{
   

    return 0; 
}