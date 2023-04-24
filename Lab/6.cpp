#include <iostream>
 using namespace std;
  int main ( )
{
	int array[10];
	int even=0, odd=0, a=0,d=0;
	cout<<"Enter Numbers : ";
	for(int m=0; m<10; m++)
	{
		cin>>array[m];
		if (array[m]%2==0)
		{
			even++;
			if(array[m]%7==0)
			{
				d++;
			}
		}
		else if (array[m]!=0)
		{
			odd++;
			if (array[m]%7==0)
			{
				d++;
			}
		}
	}
	cout<<"Even : "<<even<<endl;
	cout<<"Odd  : "<<odd<<endl;
	cout<<"Divisible by 7  : "<<d<<endl;
}