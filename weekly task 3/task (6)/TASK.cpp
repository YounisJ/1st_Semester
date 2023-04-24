#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter the amount of purchase "<<endl<<endl;
	
	int a;
	cin>>a;
	
	cout<<"Amount of the purchase= "<<a<<endl;
	cout<<"The state Sales Tax= "<<a*0.05<<endl;
	cout<<"The Country Sale tax= "<<(a*0.025)<<endl;	
	cout<<"Total Sale tax= "<<(a*0.05)+(a*0.025)<<endl;
	cout<<"Total Sale= "<<(a*0.05)+(a*0.025)+a;
}
