#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    
    int matriz[2][2];
    
    for (int i = 0; i < 2; i++) 
    
        for (int j = 0; j < 2; j++) 
        
            cin >> matriz[i][j];
    
    int soma = 0;
    
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            
            cout << matriz[i][j] << " ";
            soma += matriz[i][j];
        }
        cout << endl;
    }

    cout << soma << endl;
    return 0;
}