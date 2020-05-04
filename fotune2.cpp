#include <iostream>

using namespace std;

int main()
{
    int one, two, three, four, five;
    int product;
    cout << "Calculate the PRODUCT of Five Number" << endl;
    cout << "num1 : ";
    cin >> one;
    cout << "num2 : ";
    cin >> two;
    cout << "num3 : ";
    cin >> three;
    cout << "num4 : ";
    cin >> four;
    cout << "num5 : ";
    cin >> five;
    product = one * two * three * four * five;
    cout << "Product = " << product;
    return 0;
}