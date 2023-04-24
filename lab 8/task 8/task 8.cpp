#include <iostream>
using namespace std;
float perm=800;
float daily=400;
int main()
{
	st:
	cout<<"1. Permanent employee"<<endl;
	cout<<"2. Daily wages worker"<<endl;
	int choose;
	cin>>choose;
	if(choose==1)
	{
		cout<<"1. Salary "<<endl;
		cout<<"2. Medical charges"<<endl;
		int choice;
		cin>>choice;
		if(choice==1)
		{
			cout<<"Salary of Permanent employee will be = "<<perm*30<<" Per Month."<<endl;
			goto st;
		}
		else if(choice==2)
		{
			cout<<"Medical Charges of Permanent employee will be = "<<(perm*30)*0.05<<" Per Month."<<endl;
			goto st;
		}
		else 
		{
			cout<<"Invalid choice."<<endl;
			goto st;
		}
	}
		else if(choose==2)
		{
		cout<<"1. Salary "<<endl;
		cout<<"2. Medical charges"<<endl;
		int choice;
		cin>>choice;
		if(choice==1)
		{
			cout<<"Salary of daily worker will be = "<<daily*30<<" Per Month."<<endl;
			goto st;
		}
		else if(choice==2)
		{
			cout<<"Medical Charges of daily worker will be = "<<(daily*30)*0.03<<" Per Month."<<endl;
			goto st;
		}
		else 
		{
			cout<<"Invalid choice."<<endl;
			goto st;
		}
	}
	else 
	{
		cout<<"Invalid choice."<<endl;
		goto st;
	}
	
	
	
	
	
	
	return 0;
}
