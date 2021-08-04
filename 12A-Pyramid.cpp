//    1
//   12A
//  123AB
// 1234ABC
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
    {
        char k='1';
        for(int j=1;j<=7;j++)
        {
            if(j==5)
            k='A';
            if(j>=5-i && j<=3+i)
            {
                cout<<k;
                k++;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}