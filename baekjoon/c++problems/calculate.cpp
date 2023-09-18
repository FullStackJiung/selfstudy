#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int add = a + b;
    int sub = a - b;
    int times = a * b;
    int divi = a / b;
    int r = a % b;
    cout << add << endl
         << sub << endl
         << times << endl
         << divi << endl
         << r;
    return 0;
}