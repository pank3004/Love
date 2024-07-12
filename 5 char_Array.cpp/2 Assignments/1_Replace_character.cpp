#include<iostream>
using namespace std;

int getLength(char arr[]){
    int i=0;
    int len=0;
    while(arr[i]!='\0'){
        len++;
        i++;
    }
    return len;
}
void replace(char arr[], char origionalChar, char newChar){
    int len=getLength(arr);

    int i=0;
    while(arr[i]!='\0'){
        if(arr[i]==origionalChar){
            arr[i]=newChar;
        }
        i++;
    }
}
int main(){
    char arr[200];

    cout<<"Enter the sentance: "<<endl;
    cin>>arr;
    cout<<"this is the array: "<<endl;
    cout<<arr<<endl;

    char origionalChar='@';
    char newChar= '_';
    replace(arr, origionalChar, newChar);
    cout<<"this is the array after replacment: "<<endl;
    cout<<arr<<endl;

    
    


    return 0;
}