#include <iostream>
using namespace std;
int main()
{
   
    int size = 0;
    int a = 0;
    int b = 0;
    cin >> size;
 for(int i = 0; i < size; i++) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a + b);
}

    return 0;
}