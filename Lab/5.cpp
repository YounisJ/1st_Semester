#include <iostream>
 using namespace std;
  int main ( )
{
	int option;
	char a,b,c;
	cout<<"*************************"<<endl;
	cout<<"                         "<<endl;
	cout<<"    1. Assending Order   "<<endl;
	cout<<"    2. Desending Order   "<<endl;
	cout<<"                         "<<endl;
	cout<<"*************************"<<endl;
	cin>>option;
	
	switch(option)
	{
		case 1 : cout<<"Enter 3 alphabets : "; 
		cin>>a>>b>>c;
				for (char m='a'; m<='z'; m++)
				{
					if (m==a || m==b || m==c)
					{
						cout<<m<<" ";
					}
				}
		break;
		
		case 2 : cout<<"Enter 3 alphabets : "; cin>>a>>b>>c;
				for (char m='z'; m>='a'; m--)
				{
					if (m==c || m==b || m==a)
					{
						cout<<m<<" ";
					}
				}
		break;
	}
}