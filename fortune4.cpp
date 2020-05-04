#include <iostream>

using namespace std;

int main()
{
    int v, u, a, t;
    int sum, average;
    cout << "given that V = U + AT, Coumpute V;" << endl;
    cout << "Enter initial velocity :  ";
    cin >> u;
    cout << "Enter acceleration : ";
    cin >> a;
    cout << "Enter time/'s : ";
    cin >> t;
    v = u + a * t;
    cout << "answer = " << v;

    return 0;
}
