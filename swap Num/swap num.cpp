#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter 1st number :";
	cin>>a;
	int b;
	cout<<"enter 2nd number :";
	cin>>b;
	
	a=a-b;
	b=b-a;
	a=a+b;
	
	cout<<"1st Number : "<<a<<endl;
	cout<<"2nd Number : "<<b<<endl;
	
	
}
