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
    float X1, X2;
    float Y1, Y2;
    
    float dist;
    
    cin >> X1 >> Y1 >> X2 >> Y2;
    
    dist = sqrt( (pow ( (X2-X1),2 ) + pow( (Y2-Y1) ,2 ) ));
    
    cout << "a distancia entre os pontos é: " << dist;
    
    return 0;
}
