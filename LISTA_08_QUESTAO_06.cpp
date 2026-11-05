#include <iostream>
#include <string>

using namespace std;

string maior_palavra(string A, string B)
{
    if (A.size() >= B.size()) return (A);
    else return (B);
}


int main() {

    string X, Y;

    cin >> X;
    cin >> Y;

    cout << maior_palavra(X, Y) << endl;
   

    return 0;
}
