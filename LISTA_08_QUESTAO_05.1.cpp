#include <iostream>

using namespace std;

int arredonda_baixo(double A)
{
    return int(A);
}

int arredonda_cima(double A)
{
    if (A > int(A)) return int(A) + 1;
    else return A;
}

int arredonda_convencional(double A)
{
    if (A - int(A) >= 0.5) return int(A) + 1;
    else return A;
}

int main() {

    double X;

    cin >> X;

    cout << arredonda_baixo(X) << endl;
    cout << arredonda_cima(X) << endl;
    cout << arredonda_convencional(X) << endl;

    return 0;
}
