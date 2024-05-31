#include<iostream>
#include <algorithm>

using namespace std;
void reverseArray(int arr[], int size){
    int l=0;
    int h=size-1;

    // while(l<h){
    //     swap(arr[l], arr[h]);
    //     l++;
    //     h--;
    // }

    // good programmer ka code

    // while(l<h){
    //     swap(arr[l++], arr[h--]);
    // }

    // more pro programmer
     while(l<h)
        swap(arr[l++], arr[h--]);
    
}
int main(){
    int arr[9]={10,20,30,40,50,60,70,80,90};
    int size=sizeof(arr)/sizeof(arr[0]);
         //m1 custom reversal using 2 pointer approach
    //reverseArray(arr, size);

        // m2  using STL
    reverse(arr, arr+size);


    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}