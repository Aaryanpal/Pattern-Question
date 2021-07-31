
//        *
//       ***
//      *****
//     *******
//    *********
//   ***********
//  *************
// ***************
//  *************
//   ***********
//    *********
//     *******
//      *****
//       ***
//        *

#include<iostream>
using namespace std;

int main()
{
    int check,rows,k=0;
    cout<<"Life sucks But dont lose hope(Enter a number:)\n";
    cin>>rows;
    check=(rows+1)/2;
  
    for(int i=1;i<=rows;i++)
    {   if(rows%2==0){
        if(i<=check) k++;
        if(i>check+1)k--;
    }
    else{

        i<=check?k++:k--;
    }
    for(int j=1;j<=rows;++j)
        {
            if(j>=check+1-k && j<=check-1+k){

                cout<<"*";
            }
            else{

            cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}