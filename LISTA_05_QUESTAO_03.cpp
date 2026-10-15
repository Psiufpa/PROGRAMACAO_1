#include <iostream>
#include <cstdlib>
#include<ctime>

using namespace std;

// QUESTAO 01 - LISTA 05 //

int main() 
{
    

    float vetor[10];
    float soma = 0;
    int N;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) 
    {
        
        cin >> vetor[i];
        
        soma += vetor[i];
    }
    
    cout << soma/N << endl;
    
    for (int i = 0; i < N; i++) 
    {
        
        if (vetor[i] > (soma/N))
            
            cout << i << endl;
    }
    
   
    return 0;
}