/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
   
   int num;
   
   cin >> num;
   
   cout << num << " ";
   
   while (num != 1)
   {
       if (num % 2 == 0)
       {
          num = num / 2;
          cout << num << " ";
       }
       else
       {
           num = num * 3 + 1;
           cout << num << " ";
       }
    }
    
    
     
    return 0;
}