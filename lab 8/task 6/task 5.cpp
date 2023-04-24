#include <iostream>
using namespace std;
int main()
{
	cout<<"Press 1 to find Sum of The two Numbers"<<endl;
	cout<<"Press 2 to find Number is even or odd"<<endl;
	
	
	int choose;
	cin>>choose;
	
	if(choose==1)
	{
		cout<<"Enter two numbers for addition"<<endl;
		int a,b;
		cin>>a>>b;
		
		cout<<"Addition ="<<a+b<<endl;
	}
	else if(choose==2)
	{
		cout<<"Enter number To find even or odd"<<endl;
		int x;
		cin>>x;
		
		if(x%2==0)
		{
			cout<<"Even"<<endl;
			return 0;
		}
		else
		{
			cout<<"Odd"<<endl;
			return 0;
		}
	}
	else 
	{
		cout<<"Invalid Choice"<<endl;
	}
	
	
}
