#include <iostream>
using namespace std;
int main()
{
    int T;

    cin >> T;
    int result[T];
    int a[T], b[T];
    for (int i = 0; i < T; i++)
    {
        cin >> a[i] >> b[i];
        result[i] = a[i] + b[i];
    }
    for (int i = 0; i < T; i++)
    {
        cout << "Case #" << i+1 << ": " << a[i] << " + " << b[i] << " = " << result[i] << endl;
    }
    return 0;
}