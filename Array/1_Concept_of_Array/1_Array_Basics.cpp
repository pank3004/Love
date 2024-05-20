#include<iostream>
using namespace std;
int main(){
    // int arr[5];
    // cout<<arr[0]<<endl;  // garbage value

    // int brr[4]={10,26};
    // for(int i=0; i<4; i++){
    //     cout<<brr[i]<<" ";
    // }

    // int crr[4]={0};
    // for(int i=0; i<4; i++){
    //     cout<<crr[i]<<" ";
    // }

    // int drr[4]={10};
    // for(int i=0; i<4; i++){
    //     cout<<drr[i]<<" ";
    // }

    // int arr[]={10,20,30,40};
    // cout<<sizeof(arr)/sizeof(int)<<endl;
    // cout<<arr[2]<<endl;
    // cout<<2[arr]<<endl;
    // cout<<*(arr+2)<<endl;
    // cout<<*(2+arr)<<endl;

    int arr[4];
    fill(arr, arr+4, 5);            // initialize arr with value 5
    for(int i=0; i<4; i++){
        cout<<arr[i]<<" ";
    }

}