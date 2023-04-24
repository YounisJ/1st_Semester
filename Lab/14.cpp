#include <iostream>
#include <string>
#include <string.h>
 using namespace std;
  int main ( )
{
	// 1
	string str="Mubeen";
	
	cout<<"Enter Your Name : "; getline(cin, str);
	cout<<"Length of Name  : "<<str.length();
	
	cout<<endl;
	// 2
	cout<<"Before : "<<str<<endl;
	cout<<"After  :";
	for (int m=str.length(); m>=0; m--)
	{
		cout<<str[m];
	}
	
	cout<<endl;
	// 3
	char str1[100], str2[100];
	cout<<"Enter Name  : "; cin>>str1;
	cout<<"Enter Caste : "; cin>>str2;
	cout<<"Full Name   : ";
	strcat(str1, str2);
	cout<<str1;

	cout<<endl;
	// 5
	char lower[20];
	cout<<"Enter your name in Upper case : ";
	cin>>lower;
	cout<<strlwr(lower);
	
}