#include <iostream>
//#include <algorithm>
 using namespace std;
  int main()
{
	
	int x,rev=0,rem;
	cin>>x;//123
	while(x!=0)
	{
		rem=x%10;//3//2//1
		rev=rev*10+rem;//3//32//321
		x=x/10;//12//1//0
	}
	cout<<"rev : "<<rev;





	
  return 0;
}

