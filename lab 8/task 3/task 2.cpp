#include <iostream>
 using namespace std;
  int main ( )
{
	string n;
	int a=0,e=0,i=0,o=0,u=0;
	cout<<"Enter String : ";
	getline(cin, n);
	
	for(int j=0; j<=n.length(); j++)
	{
		if (n[j]=='a' || n[j]=='A')
		{
			a++;
		}
		else if (n[j]=='e' || n[j]=='E')
		{
			e++;
		}
		else if (n[j]=='i' || n[j]=='I')
		{
			i++;
		}
		else if (n[j]=='o' || n[j]=='O')
		{
			o++;
		}
		else if (n[j]=='u' || n[j]=='U')
		{
			u++;
		}
	}
	cout<<"Total e : "<<a<<endl;
	cout<<"Total e : "<<e<<endl;
	cout<<"Total i : "<<i<<endl;
	cout<<"Total o : "<<o<<endl;
	cout<<"Total u : "<<u<<endl;
	cout<<"Total Vowels : "<<a+e+i+o+u;
	
}
