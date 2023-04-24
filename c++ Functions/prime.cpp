#include <iostream>
using namespace std;

int prime(int a);
int main()
{
	int a;
	cin>>a;
	prime(a);
	
}

prime(int a)
{
	int b=a;
	
	if(a%2!=0)
	{
		if(a%a==0)
		{cout<<"This is a prime Number"<<endl;
		}
		
		else
		{
			cout<<"This is not a prime number"<<endl;
		}
	}
	else
	{
		cout<<"this is not prime number "<<endl;
	}
	
	
}
