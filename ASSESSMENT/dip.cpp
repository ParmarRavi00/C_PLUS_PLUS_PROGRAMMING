#include<iostream>
using namespace std;
#include<string.h>
class student{
	public:
 string name;
 int rollno;
 int marks;
      	student(string name,int rollno,int marks)
      	{
      		name=name;
      		rollno=rollno;
      		marks=marks;
		  }
	void display()
	{
	
	cout<<"name is :"<<nane<<endl;
	cout<<"roll is :"<<rollno <<endl;
	cout<<"mark is :"<<marks<<endl;
    }
	
};

int main()
{
	string name;
	int rollno;
	int marks;
	
	cout<<"enter name :"<<endl;
	cin>>name;
	cout<<"enter roll :"<<endl;
	cin>>rollno;
	cout<<"marks is   :"<<endl;
	cin>>marks;
	
	student obj(name,rollno,marks);
	cout<<"student marksheet is"<<endl;
     
     obj.display();
	
	return 0;
}
