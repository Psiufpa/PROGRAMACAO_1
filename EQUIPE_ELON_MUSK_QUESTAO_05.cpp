/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// EQUIPE ELON MUSK

// QUESTAO 05

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    
    int N;
    int salto;
    int i;
    
    int ant,prox, maior;
    ant = 0;
    prox = 0;
    
    maior = 0;
    
    cin >> N;
    
    for (i = 0; i < N; i++)
    {
        cin >> salto;
        prox = salto;
        
        if (abs (ant - prox) >= maior)
            maior = abs (ant - prox);
        
        ant = prox;
        
    }
    
    cout << "Maior Salto: " << maior << endl;
    
    return 0;
}