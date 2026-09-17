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
    float temperatura;
    
    cin >> temperatura;
    
    cout << "a temperatura em celcius é: " << (temperatura - 32.0) * (5.0/9.0);
    
    return 0;
}
