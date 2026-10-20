#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    
    int matriz[2][3];
    
    for (int i = 0; i < 2; i++) 
    
        for (int j = 0; j < 3; j++) 
        
            cin >> matriz[i][j];
    
    int soma = 0;
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            
            
            cout << matriz [i][j] << " ";
            
            if (matriz[i][j] % 2 == 0)
                
                soma ++;
            
        }
        cout << endl;
        
    }
    
    cout << soma << endl;
    
    return 0;
}