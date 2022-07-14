#include <iostream>
using namespace std;

int main() 
{
  int j = 1000; // while loop

  while(j>0)
  {
    cout << j << "\t";
    j-=100;
  }
  cout << endl;

  int k = 1000;

  do            // do loop
  {
    cout << k << "\t";
    k-=100;
  }

  while (k>0);
  cout << endl;

  for (int i=1000; i>0; i-=100)   // for loop
  {
    cout << i << "\t";
  }

  return 0;

}