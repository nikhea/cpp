#include <iostream>

using namespace std;

int main()
{
    int one, two, three, four, five;
    int sum, average;
    cout << "Calculate the SUM AND AVERAGE of Five Number" << endl;
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
    sum = one + two + three + four + five;
    average = sum / 5;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;
    return 0;
}