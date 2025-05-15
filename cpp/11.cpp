
/*

*****
*   *
*   *
*****

*/

#include<iostream>
using namespace std;
int main()
{
    for(int j=1;j<=4;j++)
    {
        for(int m=1;m<=5;m++)
           {
             if( j==1|| j==4 || m==1 || m==5)
           cout<<"*"; 
           else 
           cout<<" ";
           }
           cout<<endl;
    }
    return 0 ;
} 