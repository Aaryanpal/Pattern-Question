#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter number of rows:\n";
    // int row;
    // cin>>row;

    for(int i=0;i<4;i++)
    {
        for(int j=1;j<=7;j++)
        {
            if(j>=1+i && j<=7-i)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}