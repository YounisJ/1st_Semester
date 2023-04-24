#include <iostream>
using namespace std;
int prime(int p);


int main()
{
	int a;
	prime(a);
	
}
prime (int p)
{
	
	cout<<"Enter any integer to find Prime or not"<<endl;
	int num=p,count=0;
	cin>>num;
	
	for(int i=1; i<=num;  i++)
	{
		if(num%i==0)
		
			count++;
		
		
	}

	if(count<=2)
	{
		cout<<"This is A Prime Number"<<endl;
	}
	else
	{
		cout<<"Its Not a Prime Number"<<endl;
	}
	
	
	
	
	
}


