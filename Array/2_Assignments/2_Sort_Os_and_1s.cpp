#include<iostream>
#include<algorithm>
using namespace std;

void sortByCount(int arr[], int n){
    int zeroCounts=0;
    int oneCount=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0) zeroCounts++;
        if(arr[i]==1) oneCount++;       // we can also find n-zeroCounts
    }

                 //  M1 insert values
        
    // int i=0;
    // for( ;i<zeroCounts; i++){
    //     arr[i]=0;
    // }
    // for(; i<n; i++){
    //     arr[i]=1;
    // }

                // M2 insert values

    fill(arr, arr+zeroCounts, 0);
    fill(arr+zeroCounts, arr+n, 1);
}

void sortBysortFun(int arr[], int n){
  sort(arr, arr+n);  
}


int main(){
    int arr[]={0,1,1,0,1,0,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
                // M1
    //sortByCount(arr, n);

                //  M2
    sortBysortFun(arr, n);
    
    cout<<"this is the sort array "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}