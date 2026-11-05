#include <iostream>
using namespace std;

int sinal(int A) 
{
    if (A > 0) return (1);
    if (A < 0) return (-1);
    if (A == 0) return (0);
}

int main() {
    
    int X;
    cin >> X;
    
    cout << sinal(X) << endl;

    return 0;
}