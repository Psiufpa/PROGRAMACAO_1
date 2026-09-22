/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main() 
{
    double salario, prestacao;
    
    cin >> salario;
    cin >> prestacao;
    
    if (prestacao > 0.2 * salario)
        cout << "empréstimo não concedido!" << endl;
    else
        cout << "empréstimo concedido!" << endl;
    
    
    return 0;
}