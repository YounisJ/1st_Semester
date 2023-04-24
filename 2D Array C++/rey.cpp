#include <iostream>
using namespace std;
int main()
{
	int x[2][2]={{1,2},
				 {3,4}};
	int y[2][2]={{4,6},
				 {3,4}};
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		{
			cout<<x[i][j]*y[i][j]<<"\t";
		}
		cout<<endl;
	}
}
