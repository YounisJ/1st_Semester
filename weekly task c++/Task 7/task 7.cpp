#include <iostream>
#include <unistd.h>
using namespace std;
int maximum(int c,int d);
int maximum(int u,int v,int w);

int main()
{
	int j,h;
	maximum(j,h);
	int k,l,m;
	maximum(k,l,m);
	
}

maximum(int c,int d)
{
	cout<<"Enter Two Numbers"<<endl;
	int a,b;
	cin>>a>>b;
	if(a>b)
	{
		cout<<a<<" Is Greater Number"<<endl<<endl;
	}
	else
	{
		cout<<b<<" Is Greater Number"<<endl<<endl;
	}
	cout<<"Wait For Next Program"<<endl;
	sleep(5);
	
}
	
	
	
maximum (int u,int v,int w)	
{
	cout<<"Now enter three Numbers"<<endl;
	
	int x,y,z;
	cin>>x>>y>>z;
	if(x>y && x>z)
	{
		cout<<x<<" Is Greater Number"<<endl;
	}
	else if (y>x &&y>z )
	{
		cout<<y<<" Is Greater Number"<<endl;
	}
	else
	{
		cout<<z<<" Is Greater Number"<<endl;
	}
}
