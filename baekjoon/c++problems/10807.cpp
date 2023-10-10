#include <iostream>
using namespace std;
int main()
{

    int count = 0;
    int arr[201];

    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }

    int a=0;
    int each=0;

    cin >> a;

    for (int i = 0; i < count; i++)
    {

        if (arr[i] == a)
        {
            each++;
        }
    }
    cout << each << endl;

    return 0;
}