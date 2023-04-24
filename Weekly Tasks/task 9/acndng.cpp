#include <iostream>
using namespace std;
int main()
{   
    cout<<"Enter 3 Numbers"<<endl;
    float a,b,c;
    cin>>a>>b>>c;

	cout<<"here is your acending order"<<endl;
	
	if (a<b && a<c && b>c)
	
	{cout<<a<<endl;
	cout<<c<<endl;
	cout<<b<<endl;
	}
	
	else if (a<b && a<c && b<c)

	{cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	}
	
	else if (b<a && b<c && c>a)
	
	{cout<<b<<endl;
	cout<<a<<endl;
	cout<<c<<endl;
	}
	
	else if (b<a && b<c && c<a)
	
	{cout<<b<<endl;
	cout<<c<<endl;
	cout<<a<<endl;
	}
	
	else if (c<a && c<b && a>b)
	
	{cout<<c<<endl;
	cout<<b<<endl;
	cout<<a<<endl;
	}
	
	else if (c<a && c<b && a<b)
	
	{cout<<c<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	}
	
	
	
	
	
}

