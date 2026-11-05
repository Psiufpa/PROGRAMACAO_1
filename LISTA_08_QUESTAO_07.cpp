#include <iostream>
#include <string>

using namespace std;

int fatorial(int N)
{
    int F = 1;

    for (int i = 1; i <= N; i++)
    {
        F = F * i;
    }

    return F;
}

int operacao(int A, char B, int C)
{
    if  (B == '+') return (fatorial(A)+fatorial(C));
    if  (B == '-') return (fatorial(A)-fatorial(C));
    if  (B == '*') return (fatorial(A)*fatorial(C));
    if  (B == '/') return (fatorial(A)/fatorial(C));
}


int main() {

    int X, Z;
    char Y;

    cin >> X;
    cin >> Y;
    cin >> Z;

    cout << operacao(X, Y, Z) << endl;
   

    return 0;
}
