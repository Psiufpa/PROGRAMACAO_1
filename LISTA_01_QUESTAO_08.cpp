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
    int dinheiro;
    
    cin >> dinheiro;
    
    cout << "número de notas de 100: " << (dinheiro/100) << "\n";
    dinheiro = dinheiro % 100;
    cout << "número de notas de 50: " << (dinheiro/50) << "\n";
    dinheiro = dinheiro % 50;
    cout << "número de notas de 20: " << (dinheiro/20) << "\n";
    dinheiro = dinheiro % 20;
    cout << "número de notas de 10: " << (dinheiro/10) << "\n";
    dinheiro = dinheiro % 10;
    cout << "número de notas de 5: " << (dinheiro/5) << "\n";
    dinheiro = dinheiro % 5;
    cout << "número de notas de 2: " << (dinheiro/2) << "\n";
    dinheiro = dinheiro % 2;
    cout << "número de notas de 1: " << (dinheiro/1) << "\n";
    

    
    return 0;
}
