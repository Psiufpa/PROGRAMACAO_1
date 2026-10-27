#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    
    int num;
    int pos=0, neg=0, pares=0;
    int soma_pos=0, soma_neg=0, soma_pares=0;
    int maior=-1000000;
    int menor=1000000;
    
    
    cin >> num;
    
    while (num != 0)
    {
        
        if (num > 0) 
        {
            pos++;
            soma_pos += num;    
        }
        else 
        {
            neg++;
            soma_neg += num;
        }
        
        if (num % 2 == 0)
        {
            pares++;
            soma_pares += num;
        }
        
        if (num >= maior) maior = num;
        if (num <= menor) menor = num;
        
        cin >> num;
    }
   
    cout << "Quantidade de positivos: " << pos << endl;
    cout << "Quantidade de negativos: " << neg << endl;
    cout << "Soma dos positivos: " << soma_pos << endl;
    cout << "Soma dos negativos: " << soma_neg << endl;
    cout << "Média dos pares: " << soma_pares / pares << endl;
    cout << "Maior número: " << maior << endl;
    cout << "Menor número: " << menor << endl;

    

    return 0;
}