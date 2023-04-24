#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter Ten Integer To Comopute even odd And Devisible by 7"<<endl;
	
	int x[10]={},even=0,odd=0,d7=0;
	
	for(int i=0; i<=9; i++)
	{
		cin>>x[i];
		
		if(x[i]%2==0)
		{
			even++;
		}
		if(x[i]%2==1)
		{
			odd++;
		}
		if(x[i]%7==0)
		{
			d7++;
		}
		
		
		}
		cout<<"Even = "<<even<<endl;
		cout<<"Odd = "<<odd<<endl;
		cout<<"Devisible by 7 = "<<d7<<endl;
}

