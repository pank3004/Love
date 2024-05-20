#include<iostream>
using namespace std;
void solve(int num[], int size){
    for(int i=0; i<size; i++){
        num[i]=num[i]+15;
    }
    return;  // here no need automaticaly return at the end of the code
}
int main(){
    int arr[4]={0};
    int size=4;
    solve(arr, size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";         // 15 15 15 15 array always be call by reference
    }
    return 0;
}