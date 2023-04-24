#include <iostream>
using namespace std;
int main()
{
	cout<<"Please enter the Charge for the food"<<endl;
	int a;
	cin>>a;
	
	cout<<"Tip Amount= 	"<<a*0.18<<endl<<endl;
	cout<<"Sales Tax = 	"<<a*0.07<<endl<<endl;
	cout<<"Total= 		"<<(a*0.18)+(a*0.07)+a;
	
}

