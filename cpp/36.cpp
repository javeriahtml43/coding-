
/*

  Hollow alphabet pyramid:      
                               A  
                              A B  
                             A   C  
                            A B C D


*/




#include<iostream>
using namespace std;
int main()
{
    for (char m='A';m<='D';m++)
   
    {
        for (char s='C';s>=m;s--)
       
        {
            cout<<" ";
        }
        
        for (char j='A';j<=m;j++)
        
        {
            if ( j=='A' || j==m || m=='D')
            
            {
                cout<<j<<" ";
            }
           
            else
           
            {
                cout<<" "<<" ";
         
         
        }
       
    }

        
        cout<<endl;
    }
 
     
    return 0;

}
