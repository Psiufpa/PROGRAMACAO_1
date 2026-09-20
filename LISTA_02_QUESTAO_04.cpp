/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    
    string dados1, dados2;
    string nome1, nome2, nome3;
    
    cin >> nome1;
    cin >> nome2;
    cin >> nome3;
    
    ifstream arquivo1(nome1);
    arquivo1 >> dados1;
    arquivo1.close();
    
    ifstream arquivo2(nome2);
    arquivo2 >> dados2;
    arquivo2.close();
    
    ofstream arquivo3(nome3);
    
    arquivo3 << dados1 << " " << dados2;
    
    arquivo3.close();
    
    return 0;
}