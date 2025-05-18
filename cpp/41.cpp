 /*

	1. Snake pattern
	
	
	1  2  3  4
	8  7  6  5
	9 10 11 12
	16 15 14 13
	

*/


   
#include <iostream>
using namespace std;

int main() {
    int rows = 4, cols = 4;
    int num = 1;


      // Left to right

    for (int m = 0; m < rows; m++)
    
    {
        
        if (m % 2 == 0) 
        
        {
            
            for (int j = 0; j < cols; j++)
            
            {
                cout << num++ << "\t";
            }
        } 

          // Right to left 
        
        else
        
        {
       

            int end = num + cols - 1;
            for (int j = 0; j < cols; j++)
            
            {
                cout << end-- << "\t";
                num++;
            }
        }

        cout << endl;

    }

    return 0;
}
