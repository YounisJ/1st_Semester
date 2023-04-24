#include <iostream>
using namespace std;
int main()
{
	cout<<"please enter the percentage to view your grade"<<endl;
	float p;
	cin>>p;
	
	if(p>=80 && p<=100)
	{cout<<"A1 Grade";
	}
	
	else if(p>=70 && p<80)
	{cout<<"A Grade";
	} 
	
	else if(p>=60 && p<70)
	{cout<<"B Grade";
	}
	
	else if(p>=50 && p<60)
	{cout<<"C Grade";
	}
	
	else
	{cout<<"No Grade or Failure";
	}
		
}

