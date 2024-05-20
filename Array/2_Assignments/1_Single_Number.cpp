#include<iostream>
using namespace std;
int singleNumber(int nums[], int size) {
        int ans=0;
        for(int i=0; i<size; i++){
            ans=ans^nums[i];
        }
        return ans;
        
    }

int myMethod(int arr[], int size){
    for(int i=0; i<size; i++){
        int target=arr[i];
        for(int j=0; j<size; j++){
            if((arr[i]==arr[j]) && (i!=j)){
                break;
            }
            if(j==size-1){
                return target;
            }
        }
    }

}
int main(){
    int arr[]={2,2,1};
    int size=3;
         // M1 with O(n)
    cout<<"single Value="<<singleNumber(arr, size)<<endl;    // O(n)
         // M2 with O(n^2)
    cout<<"single Value="<<myMethod(arr, size)<<endl;        // O(n^2)  


}