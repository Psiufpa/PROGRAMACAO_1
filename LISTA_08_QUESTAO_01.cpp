#include <iostream>
using namespace std;

int dobro(int A) 
{
    return (A*2);
}

int main() {
    
    int X, Y;
    cin >> X ;
    Y = dobro(X);
    cout << "o dobro de " << X << " é: " << Y << endl;

    return 0;
}