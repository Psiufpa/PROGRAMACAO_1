/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main() 
{
    double numero1, numero2;
    
    cin >> numero1 >> numero2;
    
    if (numero1 > numero2)
        cout << "o número " << numero1 << " é maior que o número " << numero2;
    else if (numero1 < numero2)
        cout << "o número " << numero2 << " é maior que o número " << numero1;
    else
        cout << "o número " << numero1 << " é igual ao número " << numero2;
    
    return 0;
}