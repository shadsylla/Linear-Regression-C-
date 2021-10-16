#include <cstdlib> 
#include <iostream> 
#include <string> 
#include <vector> 
#include <ctime> 
#include <numeric> 
#include <cmath> 


// using classes 

class Customer {
    private: 
       friend class GetCustomerData; 
       std::string name; 
    public: 
     Customer(std:: string name){
         this -> name = name; 
     }
}; 

class GetCustomerData {
   public: 
    static std::string GetName(Customer& customer ){
        return costumer.name; 
    }
};



int main()
{
    Customer Emily("Emily"); 
    GetCustomerData getName;

     std::cout<< " Costumer's name:  " << 
                getName.GetName(Emily) << "\n"; 



    return 0; 
}