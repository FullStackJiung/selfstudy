#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int num =0;
    for (int i = 1; i < n+1; i++)
    {
        num += i;
    }
    cout << num << endl;
    return 0;
}