#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    
    int num, i;
    
    int parte_inteira=0;
    int parte_resto;
    
    cin >> num;
    
    i = 1;
    while (num - (i+1)*(i+1) >= 0)
    {
        if (num - (i+1)*(i+1) >= 0)
        {
            i++;
            
            
        }
        parte_inteira = i;
        parte_resto = num - i*i;
        
    }
    

    cout << "Parte inteira da raiz quadrada: " << parte_inteira << endl;
    cout << "Resto final: " << parte_resto << endl;
    cout << "Quantidade de subtrações: " << i << endl;  
    
    

    

    return 0;
}