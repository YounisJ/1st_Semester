#include <iostream>
 using namespace std;
  int main()
{	
	char x[5]={};
//	loop for cin of array	
	for(int i=0;i<=4;i++)
	{
		cin>>x[i];
	}
//	loop to ascend the values

	cout<<"Ascending "<<endl;
	for(char aa='a';aa<='z';aa++)
	{

//	loop to compare and print 
	for(int i=0;i<5;i++)
	{
		if(x[i]==aa)
		{
			cout<<aa<<" ";
		}
	}	
}

cout<<endl;
	cout<<"Descending"<<endl;
	for(char aa='z';aa>='a';aa--)
	{

//	loop to compare and print 
	for(int i=0;i<5;i++)
	{
		if(x[i]==aa)
		{
			cout<<aa<<" ";
		}
	}	
}





  return 0;
}

