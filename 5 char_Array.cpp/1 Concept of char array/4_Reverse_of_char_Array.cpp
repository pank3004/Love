#include<iostream>
using namespace std;
int getLength(char arr[]){
    int count=0;
    int idx=0;
    while(arr[idx]!='\0'){
        count++;
        idx++;
    }
    return count;
}
void reverseCharArray(char arr[], int len){
    int i=0;
    int j=len-1;

    while(i<=j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
int main(){
    char arr[10];
    cout<<"Enter name: "<<endl;
    cin>>arr;

    int len=getLength(arr);

    reverseCharArray(arr, len);
    cout<<arr;

    return 0;
}