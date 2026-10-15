/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// EQUIPE ELON MUSK

// QUESTAO 03

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    
    int M;
    int pagar;
    
    
    cin >> M;
    
    pagar = 8;
    M = M - 60;
    
    while (M > 0)
    {
        
        pagar = pagar + 5;
        M = M - 60;
        
            
    }
        
    cout << "Valor a Pagar: R$ " << pagar << ".00" << endl;
    
    return 0;
}