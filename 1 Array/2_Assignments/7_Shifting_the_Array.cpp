#include<iostream>
using namespace std;


void printArray(int arr[], int size ){
    cout<<"printing the array: "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void shiftArray(int arr[], int size, int shift){
    shift=shift%size;

    if(shift==0){
        return;
    }

   //step1: copy last n elements into a temp array

    int temp[1000];
    int idx=0; 

    for(int i=size-shift; i<size; i++){
        temp[idx]=arr[i];
        idx++;
    }

    //step2: shift array elemnts by finalShift places

    for(int i=size-1; i>=0; i--){
        if(i-shift>=0){
            arr[i]=arr[i-shift];
        }
    }

   //step3: copy temp elements into original array 

    idx=0;
    for(int i=0; i<shift; i++){
        arr[i]=temp[idx];
        idx++;
    }
}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size=sizeof(arr)/sizeof(arr[0]);
    int shift=3;

    printArray(arr, size);

    shiftArray(arr, size, shift);

    printArray(arr, size);

    return 0;
}

