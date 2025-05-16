
/*

          Mirror right triangle
	
	
	                   *
	                  **
                	 ***
	                ****

*/ 


#include<iostream>
using namespace std;
int main()
{
    for(int j=1;j<=4;j++)
    {
        for(int s=3;s>=j;s--) 
        {
             cout <<" ";
                 }
          for(int m=1;m<=j;m++)
        {
             cout<<"*"; 
                }
             cout<<endl; 
    } 
return 0 ;  
}