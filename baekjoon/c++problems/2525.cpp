#include <iostream>
using namespace std;
int main()
{
    int h, m, t;
    cin >> h >> m >> t;
    m = h * 60 + m;
    m = m + t;
    h = (m / 60) % 24;
    m = m % 60;
    cout <<h<<" "<<m<<endl;
    return 0;
}