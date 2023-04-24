#include <iostream>
using namespace std;
double selling(double x,double y);
int main()
{
	int a,b;
	selling(a,b);
}
double selling (double x,double y)
{
	cout<<"Enter the purchase amount"<<endl;
	double purchase;
	cin>>purchase;
	cout<<"Now enter the tax percentage"<<endl;
	double tax,tax_amount,sale_price;
	cin>>tax;
	
	tax_amount=purchase*(tax/100);
	cout<<"Tax amount ="<<tax_amount<<endl;
	
	sale_price=tax+purchase;
	cout<<"sale price ="<<sale_price<<endl;
	
}
