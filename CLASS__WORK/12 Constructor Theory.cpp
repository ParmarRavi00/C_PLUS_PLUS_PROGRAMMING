#include<iostream>
using namespace std;
/*
	Constructor : 
	
		- It is same name as class name.
		- No Return Type.
		- It is use to initialize the data members.
	
	imp note: Constructors are called automatically
	          when the objects are created.
	          
	Types of Constructors.
	
	1) Default Constructor.(Parameterless Constructor)
			
			syntax : 
			
					class_name()
					{
						statement;
					}
			
			
		
	2) Parameterized Constructor.
	
		syntax :
		
				class_name(parameter_list)
				{
					statement;
				}
	
	3) Copy Constructor. Object as a Parameter.
	
				class_name(class_name obj)
				{
					statements;
				}
	

	Destructor : It is use to destroy unused objects.



*/

class Sample
{
	public:
		string fname,lname;
		int age;
		
		Sample()
		{
			cout<<"\nDefault Constructor Called.";
			fname = "krushna";
			lname = "Dodiya";
			age = 25;
		}
		
		Sample(string f,string l,int a)
		{
			cout<<"\nParameterized Constructor Called.";
			fname = f;
			lname = l;
			age = a;			
		}
		
		Sample(const Sample &obj)
		{
			cout<<"\n\nCopy Constructor Called.";
			fname = obj.fname;
			lname = obj.lname;
			age = obj.age;
		}
				
		void display()
		{	
		cout<<"\n\nFirst Name : "<<fname<<"\nLast Name : "<<lname<<"\nAge : "<<age;
		}
		
		
		~Sample()
		{
			cout<<"Destructor Called.";
		}
		
};



int main()
{
	Sample vivek,obj1("harshit","vadodoriya",24),obj2("neel","deda",28);
	obj1.display();
	obj2.display();
	Sample obj3(obj2);
	obj3.display();
	return 0;
}