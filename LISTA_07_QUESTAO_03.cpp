#include <iostream>

using namespace std;

int main()
{
    int num, i;

    cin >> num;

    i = 1;

    while (num - (i + 1) * (i + 1) >= 0)
    {
        i++;
    }

    int parte_inteira = i;
    int parte_resto = num - i * i;

    cout << "Parte inteira da raiz quadrada: " << parte_inteira << endl;
    cout << "Resto final: " << parte_resto << endl;
    cout << "Quantidade de subtrações: " << i << endl;

    return 0;
}