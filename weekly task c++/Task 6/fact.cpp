#include <iostream>
using namespace std;
int factorial(int b);
int main()
{
	int b;
	
	factorial(b);
}


factorial(int b)
{
int a,fact=1;
cin>>a;

if(a==0)
{
		cout<<"factorial of 0 is "<<fact;
}
else if(a<0)
{
	cout<<"Not Valid"<<endl;
}
else
{

for(int i=2; i<=a; i++)
{
	fact=fact*i;	
}
cout<<"Factorial of "<<a<<" Is "<<fact<<endl;

}}
