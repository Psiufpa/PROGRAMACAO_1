#include <iostream>

using namespace std;

int soma_divisores(int N)
{
    int S = 0;

    for (int i = 1; i < N; i++)
    {
        if (N % i == 0)
        {
            S += i;
        }
    }

    return S;
}

int main()
{
    int N;

    cin >> N;

    while (N != -1)
    {
        cout << soma_divisores(N) << " ";

        cin >> N;
    }

    return 0;
}