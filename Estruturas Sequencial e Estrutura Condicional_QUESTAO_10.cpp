/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    ifstream entrada("entrada10.txt");
    ofstream saida("saida10.txt");

    double num1, num2, resultado;
    string op;

    entrada >> num1;
    entrada >> num2;
    entrada >> op;

    if ((op != "+") and (op != "-") and (op != "/") and (op != "*"))
        saida << "Operação Inválida!!!" << endl;
    else if ((op == "/") and (num2 == 0))
        saida << "Não é possível dividir por zero" << endl;
    else
    {
        if (op == "+")
            resultado = num1 + num2;
        else if (op == "-")
            resultado = num1 - num2;
        else if (op == "/")
            resultado = num1 / num2;
        else
            resultado = num1 * num2;

        saida << fixed << setprecision(2) << resultado << endl;
    }

    return 0;
}
