#include<iostream>
using namespace std;

int main(){

    //string str;
    // cout<<"Enter input: "<<endl;
    // cin>>str;
    // cout<<str<<endl;

    // str.push_back('K');
    // str.push_back('R');
    // cout<<str<<endl;

    // str.pop_back();
    // cout<<str<<endl;


    string sentance;
    cout<<"Enter string sentance: "<<endl;
    getline(cin, sentance, 'A');  // A is the delimeter
    cout<<sentance;

    return 0;
}