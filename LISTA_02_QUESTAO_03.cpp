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
    
    float temp_c, temp_k, temp_f;
    
    cin >> temp_c;
    
    temp_k = temp_c + 273 ;
    temp_f = temp_c * 1.8 + 32 ;
    
    ofstream arquivo("temperatura.txt");
    
    arquivo << temp_k << " K" << "\n" << temp_f << " F";
    
    arquivo.close();
    
    return 0;
}