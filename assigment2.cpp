#include <iostream>

using namespace std;

int main()
{
   int num1, num2, num3, num4, num5;
   int product;
   cout << "Calculate the PRODUCT of Five Number" << endl;
   cout << "num1 : ";
   cin >> num1;
   cout << "num2 : ";
   cin >> num2;
   cout << "num3 : ";
   cin >> num3;
   cout << "num4 : ";
   cin >> num4;
   cout << "num5 : ";
   cin >> num5;
   product = num1 * num2 * num3 * num4 * num5;
   cout << "Product = " << product;
   return 0;
}