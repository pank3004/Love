#include<iostream>
using namespace std;
void printAllPosPairs(int arr[], int n){
    int count=0;
    for(int i=0;i<n; i++){
        for(int j=0; j<n; j++){
            pair<int,int> p=make_pair(arr[i], arr[j]);
            cout<<"("<<p.first<<","<<p.second<<")"<<", ";
            count++;
        }
    }
    cout<<"\nTotal possible pairs: "<<count<<endl;
}
void printUniquePoirs(int arr[], int n){
    int count=0;
    for(int i=0;i<n; i++){
        for(int j=i+1; j<n; j++){
            pair<int,int> p=make_pair(arr[i], arr[j]);
            cout<<"("<<p.first<<","<<p.second<<")"<<", ";
            count++;
        }
    }
}
bool cheakPair(int arr[], int n, int target){
    for(int i=0;i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==target)
            return true;
        }
    }
    return false;
}
pair<int,int> keyPair(int arr[], int n, int target){
    pair<int,int> ans=make_pair(-1,-1);
    for(int i=0;i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==target){
                    ans.first=arr[i];
                    ans.second=arr[j];
                    return ans;
            }
        }
    }
    return ans;    
}

bool cheakOptimlKeyPair(int arr[], int n, int target){
    int l=0;
    int h=n-1;
    while(l<h){
        if(arr[l]+arr[h]==target){
            return true;
        }
        else if(arr[l]+arr[h]>target){
            h--;
        }else{
            l++;
        }
    }
    return false;
}

pair<int,int> findOptimlKeyPair(int arr[], int n, int target){
    pair<int,int> ans=make_pair(-1,-1);
    int l=0;
    int h=n-1;
    while(l<h){
        if(arr[l]+arr[h]==target){
            ans.first=arr[l];
            ans.second=arr[h];
            return ans;
        }
        else if(arr[l]+arr[h]>target){
            h--;
        }else{
            l++;
        }
    }
    return ans;
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=40;
                // M1 with O(n^2)
    //printAllPosPairs(arr, n);

    //printUniquePoirs(arr, n);

    //cout<<cheakPair(arr, n, target)<<endl;

    // pair<int,int> p=keyPair(arr, n, target);
    // cout<<"("<<p.first<<","<<p.second<<")"<<endl;

                    // M2 with O(n)
    cout<<cheakOptimlKeyPair(arr, n, target)<<endl;

    pair<int,int> p=findOptimlKeyPair(arr, n, target);
    cout<<"("<<p.first<<","<<p.second<<")"<<endl;

    return 0;
}