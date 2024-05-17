#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,24,68,234,6,90,67,87};
    int n = sizeof(arr)/4;
    int minimum = arr[0];
    for(int i=0; i<=n; i++){
        if(minimum>arr[i]){
            minimum = arr[i];
        }
    }
    cout<<"Minimum of array : "<<minimum<<endl;
}
