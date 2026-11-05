#include <iostream>

using namespace std;

string desenha_linha(int A) { 
    
    string linha = "";
    int i;
    for (i=0; i<A; i++)
        linha += "=";
    return (linha);
}


int main() {
    int X;
    
    cin >> X; 
    
    
    cout << desenha_linha(X) << endl;
    
    
    return 0;
}
