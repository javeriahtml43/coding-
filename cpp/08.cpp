/*
   *
  ***
 *****
*******

*/ 

#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
      {  
        for(int j=1;j<=4-i;j++)
       {
         cout<<" ";
      }
     for(int m=1;m<=2*i-1;m++)
      {
        cout<<"*";
      }
      cout<<endl;
    }
    return 0;
} 
   


