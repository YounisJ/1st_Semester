#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter three characters."<<endl;
	char a,b,c;
	cin>>a>>b>>c;
	
	cout<<"1. Sort in accending Order"<<endl;
	cout<<"2. Sort in decending order"<<endl;
	int choice;
	cin>>choice;
	if(choice==1)
	{
	
	for(char i='a'; i<='z'; i++)
	{
		if(i==a ||i==b ||i==c )
		{
			cout<<i;
		}
	}
}
	
	else if(choice==2)
	{
	
	for(char j='z'; j>='a'; j--)
	{
		if(j==a ||j==b ||j==c )
		{
			cout<<j;
		}
	}
}
else 
{
	cout<<"Invalid Choice"<<endl;
}
}
