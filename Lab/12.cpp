#include <iostream>
 using namespace std;
  int main ( )
{
	string n;
	int a=0,e=0,i=0,o=0,u=0;
	cout<<"Enter String : ";
	getline(cin, n);
	
	for(int m=0; m<=n.length(); m++)
	{
		if (n[m]=='a' || n[m]=='A')
		{
			a++;
		}
		else if (n[m]=='e' || n[m]=='E')
		{
			e++;
		}
		else if (n[m]=='i' || n[m]=='I')
		{
			i++;
		}
		else if (n[m]=='o' || n[m]=='O')
		{
			o++;
		}
		else if (n[m]=='u' || n[m]=='U')
		{
			u++;
		}
	}
	cout<<"Total A : "<<a<<endl;
	cout<<"Total E : "<<e<<endl;
	cout<<"Total I : "<<i<<endl;
	cout<<"Total O : "<<o<<endl;
	cout<<"Total U : "<<u<<endl;
	cout<<"Total Vowels : "<<a+e+i+o+u;
	
}