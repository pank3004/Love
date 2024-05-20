#include<iostream>
#include<limits.h>
using namespace std;
int minValue(int arr[], int size, int min){
    for(int i=0;i<size; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;

}

int maxValue(int arr[], int size, int max){
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr[]={23,55,56,6,45,74,52,65,14,2,5};
    int size=11;
    int min=INT_MAX;
    int max=INT_MIN;
    cout<<minValue(arr, size, min)<<endl;
    cout<<maxValue(arr, size, max)<<endl;

    return 0;
}