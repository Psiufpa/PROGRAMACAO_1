#include <iostream>
#include <string>

using namespace std;

string piramide(int N)
{
    int i;
    string saida = "";
    
    for (i=1; i<=N; i++)
    {
        saida += to_string(i) + " ";
    }

    return saida;
}

int main()
{
    int X, j;

    cin >> X;

    for (j=1; j<=X; j++)
    {
        cout << piramide(j) << endl;
        
    }
    return 0;
}