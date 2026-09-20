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
    float medida;
    
    cin >> medida;
    
    cout << "a distancia em polegadas é: " << (medida*12.0) << "\n";
    cout << "a distancia em jardas é: " << (medida/3.0) << "\n";
    cout << "a distancia em milhas é: " << (medida/1760.0/3.0) << "\n";
   
    

    
    return 0;
}
