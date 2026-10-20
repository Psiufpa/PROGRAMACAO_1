#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    
    int matriz[2][2];
    
    for (int i = 0; i < 3; i++) 
    
        for (int j = 0; j < 3; j++) 
        
            cin >> matriz[i][j];
    
    int maior = -500;
    
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            
            cout << matriz[i][j] << " ";
            if (matriz[i][j] >= maior)
                maior = matriz[i][j];
        }
        cout << endl;
        
        
    }

    cout << maior << endl;
    
    return 0;
}