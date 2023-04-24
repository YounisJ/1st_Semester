#include <iostream>
using namespace std;
int main()
{
	cout<<"enter two value to swap"<<endl;
	
	int a,b;
	cout<<"Enter the value for 'A''"<<endl;
	cin>>a;
	cout<<"Enter the value for 'B''"<<endl;
	cin>>b;
	
	a =a+b;
	b =a-b;
	a =a-b;
	
	cout<<"A="<<a<<endl;
	cout<<"B="<<b;	
	
}
