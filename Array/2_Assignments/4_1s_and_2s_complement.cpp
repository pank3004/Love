#include<iostream>
using namespace std;

void onesComplement(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            arr[i]=1;
        }else{
            arr[i]=0;
        }
    }
}

void oneToMinusOne(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            arr[i]=-1;
        }
    }
}
int main(){
    int arr[]={0,1,1,1,0,0,1,0,1,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
   
    cout<<"Before flipping"<<endl;
    cout<<"this is the sort array "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    //onesComplement(arr, n);
    oneToMinusOne(arr, n);

    cout<<"After flipping"<<endl;
    cout<<"this is the sort array "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}