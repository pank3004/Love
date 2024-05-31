#include<iostream>
using namespace std;
void printAllPossibleTriplets(int arr[], int n){
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<" ";
                count++;
            }
        }
    }
    cout<<"total no of triplets: "<<count<<endl;
}

void printUniqueTriplets(int arr[], int n){
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<" ";
                count++;
            }
        }
    }
    cout<<"total no of triplets: "<<count<<endl;

}

bool isTripletPresent3Sum(int arr[] ,int n, int target){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    cout<<"this is the triplet: "<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                    return true;
                }
            }
        }
    }
    return false;
}

int main(){
    int arr[]={10,20,30,40};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=60;

    //printAllPossibleTriplets(arr, size);

    //printUniqueTriplets(arr, size);

    cout<<isTripletPresent3Sum(arr, size, target)<<endl;    

    return 0;
}