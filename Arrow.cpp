//        *
//        **
//        ***
//        ****
//        *****
//        ******
//        *******
// ***************
//        *******
//        ******
//        *****
//        ****
//        ***
//        **
//        *
#include<iostream>
using namespace std;

int main()
{   
    int row;
    cout<<"Enter the number of row";
    cin>>row;
    int n=(row+1)/2;
    int k=0;
    for(int i=1;i<=row;i++)
    {
        i<=n?k++:k--;
        for(int j=1;j<=row;j++)
        {
            if(i==n || j>=n && j <= (n-1)+k)
            cout<<"*";
            else
            cout<<" ";
        }            
        cout<<endl;
    }
    return 0;
}