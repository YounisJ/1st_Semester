#include <iostream>
using namespace std;
int main()
{
	char x[5]={'a','e','i','o','u'};
	
	for(int i=0; i<=100000; i++)
	{
		char xx;
		cin>>xx;
		
		if(xx=='a' || xx=='e' || xx=='i' || xx=='o' ||xx=='u') 
		{	
		break;
		cout<<xx;
		}	
}}
