#include<iostream>
using namespace std;

class mark{
	public:
		float pr;
		
	public:
		mark(float pr)
		{
			this->pr = pr;
		}
};

class student{
	int roll_no;
	string name;
	mark *info;
	
	public:
		
		student(int r, string n, mark *i)
		{
			roll_no = r;
			name = n;
			info = i;
		}
		
		void display()
		{
			cout << roll_no << name << info->pr;
		}
};

int main()
{
	mark obj(78.50);
	student obj1(101, "abc", &obj);
	
	obj1.display();
	
	return 0;
}