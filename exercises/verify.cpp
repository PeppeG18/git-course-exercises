/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

int main()
{
  // placeholder
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  bool flag=false;
  int x;
  cin>>x;
  for(int i=0;i<10;i++)
    if(x==N[i])
        flag=true;
  if(flag)
    cout<<"The number "<<x<<" is present";
  else
    cout<<"The number "<<x<<" is not present";

  return 0;
}
