#include <iostream>

using namespace std;

double temp_k(int C) { 
    return C + 273.15; 
}

double temp_f(int C) { 
    return (1.8 * C) + 32; 
}

int main() {
    int X;
    
    cin >> X; 
    
    
    cout << "A temperatura de " << X << "°C em Kelvin é " << temp_k(X) << "K" << endl;
    cout << "A temperatura de " << X << "°C em Fahrenheit é " << temp_f(X) << "°F"<< endl;
    
    return 0;
}
