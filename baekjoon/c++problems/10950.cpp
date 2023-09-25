#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    cin >> count;
    int num1 = 0;
    int num2 = 0;
    for (int i = 0; i < count; i++)
    {
        cin >> num1 >> num2;
        cout << num1 + num2 << endl;
    }

    return 0;
}