/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main () {
    
    float preco, novo_preco;
    cout << "Digite o preço do produto: ";
    cin >> preco;
    novo_preco = preco - preco * 0.12;
    cout << "Seu novo preco: " << novo_preco << endl;
    return 0;
}
