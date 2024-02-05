//constuctor is a special type of function.
//constructor dosen't have return  type
//constructor name is same as class name
//It is invoked at the time of creating object.

//A constructor which has no argument is known as default constructor.

#include <iostream>  
using namespace std;  
class Employee  
 {  
   public:  
        Employee()    
        {    
            cout<<"Default Constructor Invoked"<<endl;    
        }    
};  
int main()   
{  
    Employee e1; //creating an object of Employee   
    Employee e2;   
    return 0;  
}  
