//constructor is a special type of function.
//con. name is same as class name
//con. doesn't have return type
//con. will invoke automatically, at the time of obect creation
//3 type 1)default constructor 2)parameterized con.   3)copy con.
#include<iostream>
using namespace std;
class student{
	int roll_no;
	public:
	student(int roll)
	{
		
		roll_no=roll;
		cout<<"roll number is"<<roll_no;
	}
};
int main()
{
	int r;
	cout<<"enter roll no";
	cin>>r;
	student s1(r);
}
