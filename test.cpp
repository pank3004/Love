#include<iostream>
#include <algorithm> 
using namespace std;
int main(){
    int arr[5]={456,134,6,56,74};
    int size=5;
    sort(arr, arr+5);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}