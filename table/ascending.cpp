#include <iostream>
using namespace std;
int main()
{
	char x,y,z;
	cin>>x>>y>>z;
	
	
	cout<<"ascending : "<<endl;
	for(char i='a';i<='z';i++)
	{
		if(x==i||y==i||z==i)
		{
			cout<<i<<" "<<endl;
		}
	}
	cout<<"\n\ndescending : "<<endl;
	for(char i='z';i>='a';i--)
	{
		if(x==i||y==i||z==i)
		{
			cout<<i<<" "<<endl;
		}
	}
	
}

