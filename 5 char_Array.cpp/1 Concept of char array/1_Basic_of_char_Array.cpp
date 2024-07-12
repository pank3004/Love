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
int main(){
    char arr[100];



    //inut with spaced getline
    cout<<"Enter the sentance: "<<endl;
    cin.getline(arr, 15, '\t');
    cout<<arr<<endl;

    
    // cout<<"Enter the character: "<<endl;
    // cin>>arr; //abcd
    // cout<<arr[0]<<"-->"<<(int)arr[0]<<endl;
    // cout<<arr[1]<<"-->"<<(int)arr[1]<<endl;
    // cout<<arr[2]<<"-->"<<(int)arr[2]<<endl;
    // cout<<arr[3]<<"-->"<<(int)arr[3]<<endl;
    // cout<<arr[4]<<"-->"<<(int)arr[4]<<endl;  //-->0(ascii value of null character)    
    
   
    
    // //input WITH NO SPACE
    // cout<<"Enter the character: "<<endl;
    // cin>>arr;
    // // OUTUT
    // cout<<"this is the char array: "<<endl;
    // cout<<arr<<endl;
    // // length
    // int len=getLength(arr);
    // cout<<"length of the array: "<<len<<endl;


    return 0;
}