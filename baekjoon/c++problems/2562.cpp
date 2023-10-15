#include <iostream>
using namespace std;
int main()
{
    int a[9];
    int max = -1;
    int maxindex;
    for (int i = 0; i < 9; i++)
    {
        cin >> a[i];
        if (a[i] > max)
        {
            max = a[i];
            maxindex = i;
        }
    }
    cout << max << endl
         << maxindex+1;

    return 0;
}