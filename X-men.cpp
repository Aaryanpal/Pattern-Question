#include<iostream>

using namespace std;

int main()
{
    // int k=0;
    for(int i=1;i<=7;i++)
    {
        // i<=4?k++:k--;
        for(int j=1;j<=7;j++)
        {
            if(j==i||j==8-i)
            {
                if(i==j)
                {
                cout<<"\\";

                }
                else{
                cout<<"/";

                }
            }
            else
            {
              cout<<"*";
            }
        }
        
        cout<<endl;
    }
    return 0;

}
 