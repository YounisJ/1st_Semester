#include <iostream>
 using namespace std;
  int main ( )
{
	cout<<"*************************"<<endl;
	cout<<"                         "<<endl;
	cout<<"   1. Days into Hours    "<<endl;
	cout<<"   2. Days into Minutes  "<<endl;
	cout<<"                         "<<endl;
	cout<<"*************************"<<endl;
	cout<<endl;
	
	int option,n;
	cout<<"Enter Number : "; cin>>option;
	
	switch(option)
	{
		case 1 : cout<<"Enter Number of days : "; cin>>n;
				 cout<<n*24<<" Hours";
			break;
		
		case 2:  cout<<"Enter Number of days : "; cin>>n;
				 cout<<n*1440<<" Minutes";
			break;
	}
}