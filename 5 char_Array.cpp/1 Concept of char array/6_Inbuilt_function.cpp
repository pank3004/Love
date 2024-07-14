#include<iostream>
#include <cstring>
using namespace std;


int main(){
    char arr1[20];
    cout<<"Enter char for arr1: "<<endl;
    cin>>arr1;

    char arr2[20];
    cout<<"Enter char for arr2: "<<endl;
    cin>>arr2;

    cout<<"arr1="<<arr1<<endl;
    cout<<"arr2="<<arr2<<endl;

// strlen()

    // cout<<"len of arr1: "<<strlen(arr1)<<endl;
    // cout<<"len of arr2: "<<strlen(arr2)<<endl;


//strcpy()

    // strcpy(arr1, arr2);
    // cout<<"After strcopy(arr1, arr2):"<<endl;
    // cout<<"arr1="<<arr1<<endl;
    // cout<<"arr2="<<arr2<<endl;


// strcat()

    // strcat(arr1, arr2);
    // cout<<"After strcat(arr1, arr2):"<<endl;
    // cout<<"arr1="<<arr1<<endl;ṇ
    // cout<<"arr2="<<arr2<<endl;

// strcmp()
    // return 0 -- arr1==arr2
    // return -ve -- arr1<arr2 
    // return +ve -->arr1>arr2.

    cout<<"compare: "<<strcmp(arr1, arr2)<<endl;



    return 0;
}