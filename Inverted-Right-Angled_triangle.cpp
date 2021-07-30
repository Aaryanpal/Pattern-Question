// Pattern to be Printed
//           *
//         * *
//       * * *
//     * * * *
//   * * * * * 
#include<iostream>
using namespace std;

int main()
{
    cout<<"Please Enter a number \n";
    int nrows;
    cin>>nrows;
    for(int i=1;i<=nrows;i++)
    {
        for(int j=1;j<=nrows;++j)
            {
                if(j>=6-i)
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