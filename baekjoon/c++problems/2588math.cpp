#include <iostream>
using namespace std;
int main()
{       //385 %10        -->5
        //(385 %100) /10 -->8
        //385/100        -->3
    int a, b;
    cin >> a;
    cin >> b;
    cout << a * (b % 10) << endl;
    cout << a * (b % 100) / 10 << endl;
    cout << a * (b / 100) << endl;
    cout << a * b << endl;
    return 0;
}