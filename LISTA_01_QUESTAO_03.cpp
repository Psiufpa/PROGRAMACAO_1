/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main() 
{
    float nota1, nota2, nota3;
    int peso1, peso2, peso3;
    
    cout << "Digite 3 notas: ";
    cin >> nota1 >> nota2 >> nota3;
    cout << "Digite 3 pesos inteiros:";
    cin >> peso1 >> peso2 >> peso3;
    
    float media = (nota1*peso1 + nota2*peso2 + nota3*peso3) / (peso1+peso2+peso3);
    cout << media;
    
    return 0;
}

