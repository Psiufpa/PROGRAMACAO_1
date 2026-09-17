/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int num;
    int canhao, polvora, espada;
    
    // cout << "entre com o valor de dinheiro disponível:";
    cin >> num;
    
    canhao = num / 10000;
    
    polvora = (num - (canhao * 10000)) / 2000;
    
    espada = (num - (canhao * 10000) - (polvora * 2000)) / 1500;
    
    cout << "\n";
    
    cout << canhao << "\n";
    cout << polvora << "\n";
    cout << espada << "\n";
    
    return 0;
}
