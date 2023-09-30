#include <iostream>
using namespace std;
int main()
{
    int size = 0;
    int a;
    int b;
    cin >> size;
    int results[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a >> b;
        results[i] = a + b;
      
        
       
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Case #" << i + 1 << ": " << results[i]<<endl;
    }
    

    return 0;
}