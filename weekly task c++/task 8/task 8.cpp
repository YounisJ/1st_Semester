#include <iostream>
#include <unistd.h>
using namespace std;
int manimum(int c,int d);
int manimum(int u,int v,int w);

int main()
{
	int j,h;
	manimum(j,h);
	int k,l,m;
	manimum(k,l,m);
	
}

manimum(int c,int d)
{
	cout<<"Enter Two Numbers"<<endl;
	int a,b;
	cin>>a>>b;
	if(a<b)
	{
		cout<<a<<" Is Minimum Number"<<endl<<endl;
	}
	else
	{
		cout<<b<<" Is Minimum Number"<<endl<<endl;
	}
	
}
	
	
	
manimum (int u,int v,int w)	
{
	cout<<"Now enter three Numbers"<<endl;
	
	int x,y,z;
	cin>>x>>y>>z;
	if(x<y && x<z)
	{
		cout<<x<<" Is Minimum Number"<<endl;
	}
	else if (y<x &&y<z )
	{
		cout<<y<<" Is Minimum Number"<<endl;
	}
	else
	{
		cout<<z<<" Is Minimum Number"<<endl;
	}
}
