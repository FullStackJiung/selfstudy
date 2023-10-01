#include <iostream>
using namespace std;
int main()
{

    int j;
    cin >> j;
    if (9 >= j >= 1)
    {
        for (int i = 1; i < 10; i++)
        {

            cout << j << " * " << i << " = " << i * j << endl;
        }
    }
    return 0;
}