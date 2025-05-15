/*

   *   
  * *  
 *   * 
*******


*/


#include<iostream>
using namespace std;
int main()
{
    for(int j=1;j<=4;j++)
    {
        for(int s=3;s>=j;s--)
        {
        cout<<" ";
         }
          
         for( int m=1;m<= (2*j-1); m++)
         {
            if( m==1 ||  m==(2*j-1)  ||  j==4)
             cout<<"*";
             else 
             cout<<" ";
        }
        cout<<endl; 
       }
       return 0;
    } 
