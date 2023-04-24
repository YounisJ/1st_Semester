#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
	cout<<"Enter the Username and Password to Run the game"<<endl;
	st:
	cout<<"Username :";
	string user;
	cin>>user;
	
	cout<<"Password :";
	string pass;
	cin>>pass;
	
	
	if(user=="younis" && pass=="123")
	{
	cout<<"Successfully login wait while entering the game ...."<<endl<<endl<<endl;
	sleep (5);
	goto game;
	}
	
	else
	{
	cout<<"Wrong password, Try Again.... "<<endl;
	goto st;	
	}
	
	
	
	
	game:
		
	cout<<"Hello! This game is made by Muhammad Younis "<<endl;
	start:
	cout<<"Enter the number under 50 to guess :"<<endl;
	int x[1]={30};
	int y;
	
	
	for(int i=0; i<1; i++)
	{
		cin>>y;
		if(y==x[i])
		{cout<<"Congrat's You won!"<<endl<<"Do You wanna play again? y/n"<<endl;
		char n;
		cin>>n;
		if(n=='y')
		{goto start;

		}
		
		else if(n=='n')
		{break;
		}
		}
		
		
		else
		{cout<<"Oh You Loss!"<<endl<<"Do You wanna play again? y/n"<<endl;
		char o;
		cin>>o;
		if(o=='y')
		{goto start;
		}
		else if(o=='n')
		{break;
		}
		}
		
	}
	return 0;
	
	
	
}
