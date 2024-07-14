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

bool cheakPalindrome(char arr[], int len){
    int i=0;
    int j=len-1;

    while(i<=j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    char arr[10];
    cout<<"Enter name: "<<endl;
    cin>>arr;

    int len=getLength(arr);

    bool ans=cheakPalindrome(arr, len);
    cout<<"ans="<<ans<<endl;

    return 0;
}