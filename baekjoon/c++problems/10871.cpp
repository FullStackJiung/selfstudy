#include <iostream>
using namespace std;
int main(){
    int max;
    int n;
    cin >> max >> n;
    int arr[10000];
    for (int i = 0; i <max ;i++){
        cin>>arr[i];
    }
    
    for (int i = 0; i < max; i++)
    {
        if(arr[i]<n){
            cout<< arr[i]<<" ";
        }
    }
    
    return 0;
}