#include <iostream>
using namespace std;
int main()
{
    int h, m, t;
    cin >> h >> m >> t;

    int th = t / 60 +h;
    int tm = t % 60 +m;
    if(tm >59){
        tm -=60;
        if(++h>23){
            h=0;
            h+th%24;
        }
    }
    cout << h<<" "<< tm;
    

    return 0;
}