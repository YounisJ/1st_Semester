#include <iostream>
using namespace std;
int main()
{
	int option;
	
	cout<<"***********************************"<<endl;
	cout<<"*                                 "<<endl;
	cout<<"*	1. Sum of two numbers        "<<endl;
	cout<<"*	2. Find Even Odd             "<<endl;
	cout<<"*                                 "<<endl;
	cout<<"***********************************"<<endl;
	again:
	cout<<"Choose a Option : "; cin>>option;
	
	if (option==1)
	{
	int a,b;
	cout<<"Enter Frist Number : "; cin>>a; 
	cout<<"Enter Second Number : "; cin>>b;
	cout<<"Sum Of Numbers :"<<a+b;
	}
	
	else if (option>2)
	{
		cout<<"You have entered wrong number \n Please Enter 1 or 2 "<<endl;
		goto again;
	}
	else
	{
		int num;
		cout<<"Enter A Number : "; cin>>num; 
		
		if (num%2==0)
		{
			cout<<num<<" is a Even";
		}
		else
		{
			cout<<num<<" is a Odd";
		}
	}
	 
}
