#include<iostream>
using namespace std;

int main(){

    string name="MaharanaPratap";

    // cout<<name[0]<<endl;
    // cout<<name.at(0)<<endl;
    // cout<<name.front()<<endl;

    // cout<<name.back()<<endl;

    // cout<<name.length()<<endl;


    // auto it=name.begin();
    // while(it!=name.end()){
    //     cout<<*(it);
    //     it++;
    // }
    

    // cout<<name.empty()<<endl;
    // name.clear();
    // cout<<name.empty()<<endl;


    // string fname="love";
    // string lname=" babar";
    // cout<<(fname+lname)<<endl;


    // string str="Hello jee kaise ho saare";
    // cout<<str.substr(0,5)<<endl;   
    // cout<<str.substr(0)<<endl;
    // cout<<str.substr(5)<<endl;


    // name="Hello jee kaise ho saare";
    // string word="kaise";
    // cout<<name.find(word)<<endl;
    // cout<<name.find("pankaj")<<endl;
    // if(name.find("word")!=string::npos){
    //     cout<<"found"<<endl;
    // }else{
    //     cout<<"not found"<<endl;
    // } 

    string s1="Love";
    string s2="Love";
    cout<<s1.compare(s2)<<endl;
    string s3="pankaj";
    cout<<s1.compare(s3)<<endl;
    cout<<s3.compare(s1)<<endl;

    return 0;
}