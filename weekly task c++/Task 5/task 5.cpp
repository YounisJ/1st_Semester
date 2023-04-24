#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int dice();
int main()
{
srand(time(0));
for (int i =0; i<10; i++)
{
int number = dice();
cout << number << endl;
}
}
int dice()
{
int dice1 = (int)(1+(rand()%6));
int dice2 = (int)(1+(rand()%6));
int diceSum = dice1 + dice2;
return diceSum;
}
