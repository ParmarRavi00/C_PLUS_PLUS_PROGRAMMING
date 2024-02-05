#include<iostream>
using namespace std;

class Side{
	protected:
		int l;
	public:
		void setVal(int x)
		{
			l = x;	
		}	
};

class Square : public Side
{
	public:
		int sqr()
		{
			return l*l;
		}
			
};

class Cube : public Side
{
	public:
		int cub()
		{
			return l*l*l;	
		}	
};


int main()
{
	Square sq;
	Cube cb;
	int val;
	cout<<"\nEnter Value for Square : ";
	cin>>val;
	sq.setVal(val);
	int s = sq.sqr();
	cout<<"\nSqaure is : "<<s;
	//cout<<"\nSqaure is : "<<sq.sqr();
	if(s%2==0)
	{
		cout<<"\nSquare is Even";
	}
	else
	{
		cout<<"\nSquare is Odd";
	}
	int val1;
	cout<<"\nEnter Value for Cube : ";
	cin>>val1;
	cb.setVal(val1);
	int c = cb.cub();
	
	(c>s)?cout<<"\nCube is Greater.":cout<<"\nSquare is Greater.";
	
	
	return 0;
}
