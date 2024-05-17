#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,24,68,234,6,90,67,87};
    int n = sizeof(arr)/4;
    int maximum = arr[0];
    for(int i=0; i<=n; i++){
        if(maximum<arr[i]){
            maximum = arr[i];
        }
    }
    cout<<maximum<<endl;
}
