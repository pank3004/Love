#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    cout<<"This is the array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
                 // static memory allcoation

    // int arr[5]={4,5,6,7,8};
    // printArray(arr, 5);

                 // dynamic memory allcation

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *arr=new int[n];

    cout<<"Insert the elm of the array: "<<endl;
    for(int i=0; i<n; i++){
        int data;
        cin>>data;
        arr[i]=data;
    }
 
    // HERE I AM TRYING TO ADD SOME MORE 10 ELMS IN THE ARRAY
    for(int i=0; i<10; i++){
        arr[i+n]=80;              // this is not possible in the case of array; 
    }

    printArray(arr, n);
 


}