//     A
//    CB
//   FED
//  JIHG
// ONMLK
#include<iostream>
using namespace std;
int main()
{   
    char k= 64;
    for(int i=1;i<=5;i++)
    {
        k=k+2*(i-1)+1;
        for(int j=1;j<=5;j++)
        {
            if(j>=6-i)
            {
                cout<<k--;
                
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}