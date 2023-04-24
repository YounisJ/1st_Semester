#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	
	if(a>=1 && a<=199)
	{cout<<"your bill is "<<a*5;
	}
	
    else if(a>=200 && a<=399)
	{cout<<"your bill is "<< a*10;
	}
	
	else if(a>=400 && a<=599)
	{cout<<"your bill is "<< a*15;
	}
	
	else
	{cout<<"your bill is "<< a*20;
	}	
	
}
