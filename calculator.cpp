#include <iostream>

using namespace std;
int main()
{
    int a, b, sum, sub, pro;
    float div;
    cout << "Enter 1st number";
    cin >> a;
    cout << "Enter 2nd number";
    cin>>b;
    sum = a + b;
    pro = a * b;
    sub = a - b;
    div = a / b;
    cout << "sum\n"
         << sum << "pro\n"
         << pro << "sub\n"
         << sub << "div\n"
         << div;
    return 0;
}