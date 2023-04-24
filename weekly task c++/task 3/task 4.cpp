#include <iostream>
using namespace std;
int palindrome(int p);
int main()
{
	int a;
	palindrome(a);
	
}
palindrome (int p)
{
	int n=p, num, digit, rev = 0;

    cout << "Enter a positive number: ";
    cin >> num;

    n = num;

	while (num != 0)
    {
    digit = num % 10;
    rev = (rev * 10) + digit;
    num = num / 10;
    } 

    if (n == rev)
    {
	cout << " The number is a palindrome.";
	}
    else
	{
    cout << " The number is not a palindrome.";
	}
    return 0;
}

