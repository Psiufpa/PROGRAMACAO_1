#include <iostream>
#include <cstdlib>
#include<ctime>

using namespace std;

// QUESTAO 01 - LISTA 05 //

int main() 
{
    

    int vetor[10];
    int quantidade_positivos = 0, soma_negativos = 0;
    
    
    
    for (int i = 0; i < 10; i++) {
        
        cin >> vetor[i];
        
        if (vetor[i] < 0)
            soma_negativos += vetor[i];
        else
            quantidade_positivos +=1;
    }
    
    cout << quantidade_positivos << endl;
    cout << soma_negativos << endl;

    for (int i = 9; i >= 0; i--) 
    
        cout << vetor[i] << " ";
    
    
    
    return 0;
}