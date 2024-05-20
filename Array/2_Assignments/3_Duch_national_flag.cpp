#include<iostream>
#include<algorithm>
using namespace std;

void sortByCount(int arr[], int n){
    int zeroCounts=0;
    int oneCount=0;
    int twoCount=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0) zeroCounts++;
        if(arr[i]==1) oneCount++;       // we can also find n-zeroCounts
        if(arr[i]==2) twoCount++;
    }
    cout<<zeroCounts<<","<<oneCount<<","<<twoCount<<endl;

                 //  M1 insert values
        
    // int i=0;
    // for( ;i<zeroCounts; i++){
    //     arr[i]=0;
    // }
    // for(; i<zeroCounts+oneCount; i++){
    //     arr[i]=1;
    // }
    // for(; i<n; i++){
    //     arr[i]=2;
    // }

                // M2 insert values

    fill(arr, arr+zeroCounts, 0);
    fill(arr+zeroCounts, arr+zeroCounts+oneCount, 1);
    fill(arr+zeroCounts+oneCount, arr+n, 2);
}

void sortBysortFun(int arr[], int n){
  sort(arr, arr+n);  
}


int main(){
    int arr[]={0,1,2,1,2,0,1,0,1,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
                // M1  O(n)
    //sortByCount(arr, n);

                //  M2  O(nlogn)
    sortBysortFun(arr, n);
    
    cout<<"this is the sort array "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}