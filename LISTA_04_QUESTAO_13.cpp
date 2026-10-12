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
   
   int voto_1, voto_2, voto_3, voto_4, voto_5, voto_6;
   int voto, total;
   
   voto_1 = 0;
   voto_2 = 0;
   voto_3 = 0;
   voto_4 = 0;
   voto_5 = 0;
   voto_6 = 0;
   total = 0;
   
   do
   {
     cin >> voto;
     if (voto == 1) 
     {
        voto_1 += 1;
        total += 1;
        
     }
     else if (voto == 2)
     {
        voto_2 += 1;
        total += 1;
        
     } 
     else if (voto == 3) 
     {
        voto_3 += 1;
        total += 1;
        
     }
     else if (voto == 4)
     {
        voto_4 += 1;     
        total += 1;
        
     }
     else if (voto == 5) 
     {
         voto_5 += 1;
         total += 1;
     }
     else if (voto == 6) 
     {
         voto_6 += 1;
         total += 1;
     }
   }
   
   while (voto!=0);
   
   cout << fixed << setprecision(11);
   
   cout << "1: " << voto_1 << "  " << voto_1 / static_cast<double>(total) << endl;
   cout << "2: " << voto_2 << "  " << voto_2 / static_cast<double>(total) << endl;
   cout << "3: " << voto_3 << "  " << voto_3 / static_cast<double>(total) << endl;
   cout << "4: " << voto_4 << "  " << voto_4 / static_cast<double>(total) << endl;
   cout << "5: " << voto_5 << "  " << voto_5 / static_cast<double>(total) << endl;
   cout << "6: " << voto_6 << "  " << voto_6 / static_cast<double>(total) << endl;
   cout << "7: " << (voto_1 + voto_2 + voto_3 + voto_4) << "  " << (voto_1 + voto_2 + voto_3 + voto_4) / static_cast<double>(total) << endl;
    
   
    return 0;
}