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

void upper_to_lower(char arr[], int size){
    for(int i=0; i<size; i++){
        char ch=arr[i];
        if(ch>='A' && ch<='Z'){
            ch=ch-'A'+'a';
        }
        arr[i]=ch;
    }
    cout<<arr<<endl;
}

void lower_to_upper(char arr[], int size){
    for(int i=0; i<size; i++){
        char ch=arr[i];
        if(ch>='a' && ch<='z'){
            ch=ch-'a'+'A';
        }
        arr[i]=ch;
    }
    cout<<arr<<endl;
}
int main(){
    char arr[40];
    cout<<"Enter name: "<<endl;
    cin>>arr;

    
    int size=getLength(arr);
    
    //upper_to_lower(arr, size);
    lower_to_upper(arr, size);

    return 0;
}