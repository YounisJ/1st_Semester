#include <iostream>
using namespace std;

int add(int add1,int add2);
int sub(int sub1,int sub2);
int multi(int mp1,int mp2);
int dvn(int div1,int div2);
int square(int s);
int cube(int c);

int main()
{
	cout<<"Type two integers for add,subtract,multiplication and division :"<<endl;
	int a,b;
	cin>>a>>b;
	cout<<"Type One integers for Square and Cube :"<<endl;
	int c;
	cin>>c;
	add(a,b);
	sub(a,b);
	multi(a,b);
	dvn(a,b);
	
	square(c);
	cube(c);	
	
}
add(int add1,int add2)
{
	
	cout<<"Addition : "<<add1+add2<<endl;
}

sub(int sub1,int sub2)
{
	
	cout<<"Subtraction : "<<sub1-sub2<<endl;
}

multi(int mp1,int mp2)
{
	
	cout<<"Multiplication : "<<mp1*mp2<<endl;
}
dvn(int div1,int div2)
{
	
	cout<<"Division : "<<div1/div2<<endl;
}

square(int s)
{
	cout<<"Square : "<<s*s<<endl;
}

cube(int c)
{
	cout<<"Cube : "<<c*c*c<<endl;
}





