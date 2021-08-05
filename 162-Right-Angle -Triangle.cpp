// 1
// 62
// 1073
// 131184
// 15141295
include<iostream>
using namespace std;

int main()
{   
    int row;
    cin>>row;
    int p,k=1;
    for(int i=1;i<=row;i++)
    {
        p=k;
        for(int j=1;j<=i;j++)
        {
            cout<<p;
            p=p-(row-i+j);
        }
        cout<<"\n";
        k=k+1+row-i;
    }
    return 0;
}