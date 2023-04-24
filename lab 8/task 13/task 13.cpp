#include <iostream>
using namespace std;

int main() 
{

  float arr[10];

  for(int i = 0; i < 10; ++i) 
  {
    cout << "Enter Number " << i + 1 << " : ";
    cin >> arr[i];
  }

  for(int i = 1;i < 10; ++i) 
  {

    if(arr[0] < arr[i])
    {
      arr[0] = arr[i];
  	}
  }

  cout << endl << "Largest element = " << arr[0];
  return 0;
  
}
