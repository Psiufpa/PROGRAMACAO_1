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
    
    cout << "entre com um número inteiro:";
    cin >> num;
    cout <<"\n";
    cout << "o antecessor de " << num << " é: " << (num-1) << "\n";
    cout << "o sucessor de " << num << " é: " << (num+1);
    return 0;
}
