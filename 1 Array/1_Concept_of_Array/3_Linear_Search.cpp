#include<iostream>
using namespace std;
int linearSearch(int brr[], int size, int target){
    for(int i=0; i<size; i++){
        if(brr[i]==target){
            return i;
        }
    }
}
int main(){
    int arr[]={10,20,30,5,40};
    int size=5;
    int target=5;
    int idx=linearSearch(arr, size, target);
    cout<<"index="<<idx<<endl;
    return 0;
}