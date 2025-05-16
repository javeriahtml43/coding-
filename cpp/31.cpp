	
	/*
	
	1. Alphabet triangle
	

	A
	A B
	A B C
	A B C D

*/

#include<iostream>
using namespace std;
int main()   
{ 
         for(char j='A';j<='D';j++)
	 {

		for(char  m='A';m<=j;m++)

        {
			cout<<m<<" ";
		}

        cout<<endl;

    }

    return 0;

}