#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    
    int matriz[3][3];
    
    for (int i = 0; i < 3; i++) 
    
        for (int j = 0; j < 3; j++) 
        
            cin >> matriz[i][j];
    
    
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            
            if (i == j)
                
                cout << matriz[i][i] << " ";
            
        }
        
        
    }
    
    cout << endl;
    
    return 0;
}