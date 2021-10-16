#include <iostream> 
#include <string> 
#include <vector> 
// this include is needed for using vector classes  

struct Vertex 
{
    float row1, row2, row3; 
}; 


std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
    stream << vertex.row1 << ", " << vertex.row2 << " , " << vertex.row3;  
   return stream; 

}


int main () {
  // to create a vector 
  std::vector<Vertex> vertices; 

  vertices.push_back({30, 31, 32});  // Push_back is used to manipulate the size of an array 
  vertices.push_back({33, 34, 35});   // Push_back is used to manipulate the size of an array 

  // to iterate through our dynamic array for loop 

  for (int i = 0;  i < vertices.size(); i++) 
   
      std::cout << vertices[i] << std::endl;   

      vertices.erase(vertices.begin() + 2 );
  

    std::cin.get();  
}
