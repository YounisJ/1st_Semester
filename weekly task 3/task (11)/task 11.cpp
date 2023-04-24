#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter number of males"<<endl;
	int a;
	cin>>a;
    cout<<"Enter number of females "<<endl;	
	int b;
	cin>>b;
	int t;
	t = a+b;
	
	cout<<(a*100)/t<<"% percent Males"<<endl;
	cout<<(b*100)/t<<"% percent Females";
		
}
