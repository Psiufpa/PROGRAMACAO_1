/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    
    ifstream arquivo("teste.txt");
    string dados;
    arquivo >> dados;
    cout << dados << "\n";
    arquivo.close();
    return 0;
}