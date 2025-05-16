/*

	5. Right-aligned alphabet pattern


	   A
	  AB
	 ABC
	ABCD
	
*/

#include<iostream>
using namespace std;
int main()
{
    
    for (char j ='A';j<='D';j++)
   
    {
        for (char s ='C';s>=j;s--)
        
        {
            cout<<" ";
        }
        
        for (char m='A';m<=j;m++)
       
        {
           cout<<m;
        }
       
        cout<<endl;
    
    }
    
    return 0;
}