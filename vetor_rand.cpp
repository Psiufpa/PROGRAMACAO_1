#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int main() {
    int vetor[10];
    srand(time(0));
    
    for (int i = 0; i < 10; i++) {
        vetor[i] = 1 + rand() % 2;
    }

    for (int i = 0; i < 10; i++) {
        cout << vetor[i] << " ";
    }

    return 0;
}