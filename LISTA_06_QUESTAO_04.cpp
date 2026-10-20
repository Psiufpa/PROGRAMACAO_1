#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    
    int matriz[3][2];
    
    for (int i = 0; i < 3; i++) 
    
        for (int j = 0; j < 2; j++) 
        
            cin >> matriz[i][j];
    
    int soma = 0;
    
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            
            cout << matriz[i][j] << " ";
            soma += matriz[i][j];
        }
        cout << endl;
        cout << soma << endl;
        soma = 0;
    }

    
    return 0;
}
