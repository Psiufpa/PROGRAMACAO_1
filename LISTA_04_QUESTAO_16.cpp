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
    
   double num, soma;
   int total, neg, pos;
   
   soma = 0;
   total = 0;
   neg = 0;
   pos = 0;
   
   do
   {
       cin >> num;
       soma = soma + num;
       total += 1;
       if (num > 0)
          pos += 1;
       else if (num < 0)
          neg +=1;
        
   }
   
   while (num != 0);
   
   total -= 1;
   
   cout << soma / total << endl;
   cout << pos << endl;
   cout << neg << endl;
   cout << (pos / static_cast<double>(total)) * 100 << " %" << endl;
   cout << (neg / static_cast<double>(total)) * 100 << " %" << endl;
    
    return 0;
}