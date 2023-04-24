#include <iostream>
 using namespace std;

  double sale_price (double p, double t);

  int main ( )
{
	double p,t;
	cout<<"Enter Purchased Price : "; cin>>p;
	cout<<"Enter Tax             : "; cin>>t;
	cout<<sale_price(p,t);
}

  double sale_price(double p, double t)
{
	t=p*(t/100);
	p=p+t;
	cout<<"Sale Price is : ";
	return p;
	
}