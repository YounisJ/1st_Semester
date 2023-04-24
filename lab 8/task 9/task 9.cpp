#include <iostream>
using namespace std;
int main()
{
	cout<<"1 for Days to Hours"<<endl;
	cout<<"2 for Days to Minutes"<<endl;
	int choice;
	cin>>choice;
	
	if(choice==1)
	{
		cout<<"Enter The Number Of Days to convert Into hours"<<endl;
		float days,hours;
		cin>>days;
		hours=days*24;
		cout<<days<<" Days = "<<hours<<" Hours."<<endl;
	}
	else if(choice==2)
	{
		cout<<"Enter The Number Of Days to convert Into Minutes"<<endl;
		float day,minutes;
		cin>>day;
		minutes=day*24*60;
		cout<<day<<" Days = "<<minutes<<" Minutes."<<endl;
		
	}
	
	
}
