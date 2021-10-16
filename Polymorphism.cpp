#include <cstdlib> 
#include <iostream> 
#include <string> 
#include <vector> 
#include <ctime> 
#include <numeric> 
#include <cmath> 


// classes have by default  private fields, as swell as methods do. 
// structs: have by default public verisons of field, as well as methods. 


 struct Shape {
       // Public by default variables. 
        double length; 
        double width; 
     
    // Also public constructer with some default values
     Shape(double l = 1, double w = 1; ) 
     { 
         length = l; 
         width = w; 
     } 
      double Area()
      {
          return length * width; 
      }
    private: 
      int id; 

    }; 
// for inheritance here 

 struct Circle : Shape {
     Circle( double width )
     {
         this-> width = width; 
     }
     double Area(){ // return using the library function pow 
         return 3.14159 * std::pow ((width / 2 ), 2 ); 
     }
 };
 


int main() 
{
    Shape shape(50, 100); 
    std::cout << " Square that:" 
            << shape.Area() << "\n"; 
             Circle circle(50); 
    std::cout << " Circle that: " 
            << circle.Area() << "\n"; 

            Shape rectangle{18,80}; 
    std::cout << " rectangle That: " 
            << rectangle.Area() << "\n"; 
    return 0; 
}