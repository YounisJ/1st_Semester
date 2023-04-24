#include <iostream>
using namespace std;

int add(int add1,int add2);
int add(int add1,int add2,int add3);
int add(int add1,int add2,int add3,int add4);
int sub(int sub1,int sub2);
int sub(int sub1,int sub2,int sub3);
int sub(int sub1,int sub2,int sub3,int sub4);
int multi(int mp1,int mp2);
int multi(int mp1,int mp2,int mp3);
int multi(int mp1,int mp2,int mp3,int mp4);
int dvn(int div1,int div2);
int square(int s);
int cube(int c);

int main()
{
	cout<<"Type two integers for add,subtract,multiplication and division :"<<endl;
	int a,b;
	cin>>a>>b;
	cout<<"Now Type Three integers for add,subtract and multiplication :"<<endl;
	int aa,bb,cc;
	cin>>aa>>bb>>cc;
	cout<<"Now Type Four integers for add,subtract and multiplication :"<<endl;
	int aaa,bbb,ccc,ddd;
	cin>>aaa>>bbb>>ccc>>ddd;
	cout<<"Type One integers for Square and Cube :"<<endl;
	int c;
	cin>>c;
	add(a,b);
	add(aa,bb,cc);
	add(aaa,bbb,ccc,ddd);
	sub(a,b);
	sub(aa,bb,cc);
	sub(aaa,bbb,ccc,ddd);
	multi(a,b);
	multi(aa,bb,cc);
	multi(aaa,bbb,ccc,ddd);
	dvn(a,b);
	
	square(c);
	cube(c);
	
	
	
	
	
}
add(int add1,int add2)
{
	
	cout<<"Addition of 2 Numbers : "<<add1+add2<<endl;
}

add(int add1,int add2,int add3)
{
	
	cout<<"Addition of 3 Numbers: "<<add1+add2+add2<<endl;
}

add(int add1,int add2,int add3,int add4)
{
	
	cout<<"Addition of 4 Numbers: "<<add1+add2+add3+add4<<endl;
}


sub(int sub1,int sub2)
{
	
	cout<<"Subtraction of 2 Numbers : "<<sub1-sub2<<endl;
}

sub(int sub1,int sub2,int sub3)
{
	
	cout<<"Subtraction of 3 Numbers : "<<sub1-sub2-sub3<<endl;
}

sub(int sub1,int sub2,int sub3,int sub4)
{
	
	cout<<"Subtraction of 4 Numbers: "<<sub1-sub2-sub3-sub4<<endl;
}

multi(int mp1,int mp2)
{
	
	cout<<"Multiplication of 2 Numbers : "<<mp1*mp2<<endl;
}
multi(int mp1,int mp2,int mp3)
{
	
	cout<<"Multiplication of 3 Numbers : "<<mp1*mp2*mp3<<endl;
}

multi(int mp1,int mp2,int mp3,int mp4)
{
	
	cout<<"Multiplication of 4 Numbers : "<<mp1*mp2*mp3*mp4<<endl;
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





