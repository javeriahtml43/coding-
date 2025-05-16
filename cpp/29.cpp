/*

	 Floyd鈥檚 triangle
	
	
	1
	2 3
	4 5 6
	7 8 9 10


*/


#include<iostream>
using namespace std ;
int main()
{

    int c=1;

    for(int j=1; j<=4 ; j++)

    {

        for(int m=1 ; m<=j ; m++)

        {
            cout<<c<<" ";
            c++;
        }

        cout<<endl;

    }

    return 0;
    
}