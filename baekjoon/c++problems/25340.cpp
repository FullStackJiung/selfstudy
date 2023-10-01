#include <iostream>
using namespace std;
int main()
{
    int total = 0;
    int rtotal = 0;
    int a, b, c, d;
    int aa, bb, cc, dd;
    cin >> total >> a >> aa >> b >> bb >> c >> cc >> d >> dd;
    rtotal = a * aa + b * bb + c * cc + d * dd;
    if (total == rtotal)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}