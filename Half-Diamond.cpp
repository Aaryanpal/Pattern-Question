// *
// **
// ***
// ****
// *****
// ******
// *******
// ******
// *****
// ****
// ***
// **
// *
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
  cout<<"Enter the row size:";
  int row_size,in,out;
  cin>>row_size;
  for(out=row_size;out>=-(row_size-1);out--)
        {
            for(in=(row_size-1);in>=abs(out);in--)
            {
                 cout<<"*";
            }
            cout<<"\n";
        }
}