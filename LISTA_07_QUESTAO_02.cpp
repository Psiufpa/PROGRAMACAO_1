#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    
    int num1, num2, j=0, i;
    
    int div3=0, div5=0, div15=0;
    
    int soma=0;
    
    int maior=-1000000;
    
    
    int vetor[10000];
    
    
    cin >> num1 >> num2;
    
    for (i = num1; i < num2+1; i++)
    {
        
        if (i % 3 == 0) div3++;
        
        if (i % 5 == 0) div5++;
        
        if (i % 3 == 0 and i % 5 == 0) 
        {
            div15++;
            vetor[j] = i;
            j++;
        }
        
        if (i % 3 != 0 and i % 5 != 0)
            soma += i;
        
    }
    
    
    cout << "Divisíveis por 3 e por 5: ";
    
    for (i=0; i<j; i++)
    {
        if (vetor[i] > maior) 
            maior = vetor[i];
            
         
        cout << vetor[i] << " ";
    }
    
    cout << endl;
    cout << "Quantidade divisível por 3: " << div3 << endl;
    cout << "Quantidade divisível por 5: " << div5 << endl;
    cout << "Quantidade divisível por ambos: " << div15 << endl;
    cout << "Soma dos que não são divisíveis por 3 nem por 5: " << soma << endl;
    cout << "Maior divisível por ambos:  " << maior << endl;
    
    
    

    

    return 0;
}