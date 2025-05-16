/*

	 ASCII character pattern
	
	
	65
	65 66
	65 66 67
	65 66 67 68
	
    */

#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i < 4; i++)
     
    {
        for (char ch = 65; ch <= 65 + i; ch++)
        
        {
            cout << (int)ch << " ";
        }

        cout << endl;

    }

    return 0;

}
