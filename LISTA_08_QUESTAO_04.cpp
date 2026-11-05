#include <iostream>

using namespace std;

double maior(int A, int B) 
{ 
    if (A>=B) return A;
    else return B;
}

int main() {
    
    int X, Y;
    
    cin >> X >> Y; 
    
    
    cout << "o maior número é " << maior(X,Y) << endl;
    
    
    return 0;
}
