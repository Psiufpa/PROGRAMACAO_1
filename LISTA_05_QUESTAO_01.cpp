#include <iostream>
#include <cstdlib>
#include<ctime>

using namespace std;

// QUESTAO 01 - LISTA 05 //

int main() 
{
    

    int vetor[10];
    srand(time(0));
    
    for (int i = 0; i < 10; i++) {
        vetor[i] = 1 + rand() % 2;
    }

    for (int i = 0; i < 10; i++) {
        cout << vetor[i] << " ";
    }
    
    int cara = 0, coroa = 0;
    
    for (int i = 0; i < 10; i++) {
        if (vetor[i] == 1)
            coroa +=1;
        else
            cara +=1;
            
    }

    cout << endl;
    cout << "Coroas: " << coroa << endl;
    cout << "Caras: " << cara << endl;
    
    return 0;
}