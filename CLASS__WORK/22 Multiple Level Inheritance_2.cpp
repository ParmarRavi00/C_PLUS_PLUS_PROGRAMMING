#include<iostream>
using namespace std;

class Student{
	public:
		string name;
		
		void getName()
		{
			cout<<"\nEnter your Name : ";
			getline(cin,name);
		}
};


class ExtraMarks
{
	public:
		int sp;
		
		ExtraMarks()
		{
			sp = 58;	
		}	
};

class Result : public Student,public ExtraMarks
{
	public:
		int s1,s2,s3,total;
		float per;
		
		Result()
		{
			s1 = 59;
			s2 = 63;
			s3 = 47;
			total = s1+s2+s3+sp;
			per = (float)total/4;			
		}
		
		void display()
		{
			cout<<"\nName : "<<name;
			cout<<"\nTotal : "<<total;
			cout<<"\nPercentage : "<<per;
		}
		
};

int main()
{
	Result res;
	res.getName();
	res.display();
	return 0;
}