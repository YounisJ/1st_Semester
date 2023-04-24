#include <iostream>
 using namespace std;
  int main()
{
	st:
	int a;
	cin>>a;
	
	if(a%2==1)
	{
		if(a%11==0)
		{cout<<"This is Not a prime Number"<<endl;
		}
		
		else
		{
			cout<<"This is a prime number"<<endl;
		}
	}
	else
	{
		cout<<"This is Not a prime Number"<<endl;
	}
	goto st;
	
  return 0;
}

