#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter the value of five items to get "<<endl
	<<"subtotal,sales tax and total"<<endl;
	
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	
	cout<<"Subtotal= "<<a+b+c+d+e<<endl;
	cout<<"Sales Tax= "<<a*0.07+b*0.07+c*0.07+d*0.07+e*0.07<<endl;
	cout<<"Total= "<<(a*0.07)+a+(b*0.07)+b+(c*0.07)+c+(d*0.07)+d+(e*0.07)+e;	
	
}
