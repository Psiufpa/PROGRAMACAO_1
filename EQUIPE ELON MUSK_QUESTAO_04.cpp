/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// EQUIPE ELON MUSK
// QUESTÃO 04

#include <iostream>

using namespace std;

int main()
{
    int n, reverso = 0, original;

    cin >> n;
    
    original = n;

    while (n != 0)
    {
        int digito = n % 10;
        reverso = reverso * 10 + digito;
        n = n / 10;
    }

    if (original == reverso) 
        cout << "SIM" << endl;
    else
        cout << "NAO" << endl;
    
    return 0;
}