// For n=5 valid upt0 150
// * * * * *
// *       *
// *       *
// *       *
// * * * * *
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Stay Positive you are good to go(number please):\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n)
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