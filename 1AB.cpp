//          1
//         A B
//        1 2 3
//       A B C D
//      1 2 3 4 5
//     A B C D E F
//    1 2 3 4 5 6 7
//   A B C D E F G H
//  1 2 3 4 5 6 7 8 9
// A B C D E F G H I J
#include<iostream>
using namespace std;

int main()
{
    int line,num=1;
    cout<<"Enter the number of line\n";
    cin>>line;
    for(int i=1;i<=line;i++)
    {   
        int k=1;
        int num=1;
        char alpha='A';
        for(int j=1;j<=(line*2-1);j++)
        {   
            if(j>=(line+1)-i && j<=(line-1)+i)
            {   if(k){
                if(i%2==1)
                cout<<num++;
                else
                cout<<alpha++;
            }
                else
                cout<<" ";
                k=1-k;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}