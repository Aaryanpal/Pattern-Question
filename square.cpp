// For some fixed n
// n=5
// * * * * *
// * * * * *
// * * * * * 
// * * * * * 
// * * * * *

#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter a number witha smile :>\n";
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=n;++j)
        {
            cout<<"*"<<" "; 
        }
        cout<<endl;
    }

return 0;

}