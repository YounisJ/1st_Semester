#include <iostream>
using namespace std;
int main()
{
	int a[10] , m=0;
	for (int i=0; i<9; i++)
	{
		cin>>a[i];
		
		if ( a[i]>m )
		{
			m=a[i];
		}
	}
	cout<<"Maximum Number : "<<m;
}
