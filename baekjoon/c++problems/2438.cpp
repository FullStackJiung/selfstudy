#include <iostream>
using namespace std;
int main()

{
    int size =0;
    cin >> size;
    
    string result ;
    for (int i =0; i < size  ; i++)
    {
        result += "*";
        cout << result << endl;
    }
    return 0;
}