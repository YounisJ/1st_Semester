#include <iostream>
 using namespace std;
  int main ( )
{
	char array[5]={'P','I','U','D','A'};
	for (int m=0; m<5; m++)
	{
		if (array[m]=='D')
		{
			continue;
		}
		else
		{
			cout<<array[m];
		}
	}
}
