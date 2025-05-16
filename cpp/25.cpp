/* 

1
121
12321
1234321

*/ 

#include<iostream>
using namespace std;
int main()
{
     int c=1;
    for (int m = 1; m <= 4; m++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout<<j;
        }
        for (int j = m-1; j >= 1; j--)
        {
            cout<<j;
        }
        cout<<endl;
     }

}