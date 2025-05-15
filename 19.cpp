/* 

	1
	1 2 
	1 2 3 
	1 2 3 4 


*/


#include <iostream>
using namespace std;
int main()
{ 
   for(int j=1;j<=4;j++)
   {
    for(int m=1;m<=j;m++)
    {
        cout<<m<<" ";
    }
    cout<<endl;
   }
   return 0;
} 