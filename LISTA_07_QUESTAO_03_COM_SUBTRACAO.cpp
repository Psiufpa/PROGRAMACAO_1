#include <iostream>

using namespace std;

int main()
{
    int num;
    int i = 1;
    int resto;
    int parte_inteira = 0;

    cin >> num;

    resto = num;

    while (resto - i >= 0)
    {
        resto = resto - i;
        parte_inteira++;
        i = i + 2;
    }

    cout << "Parte inteira da raiz quadrada: " << parte_inteira << endl;
    cout << "Resto final: " << resto << endl;
    cout << "Quantidade de subtrações: " << parte_inteira << endl;

    return 0;
}