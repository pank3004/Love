#include<iostream>
using namespace std;
int main(){
              // m1  best optimised method because it is inbuilt
    // int a=5, b=6;
    // swap(a,b);
    // cout<<"a="<<a<<" "<<"b="<<b<<endl;


               // m2 temp

    // int a=5, b=6;
    // int temp=a;
    // a=b;
    // b=temp;
    // cout<<"a="<<a<<" "<<"b="<<b<<endl;

             // m3 arithmatic method, interview question

    // int a=5, b=6;
    // a=a+b;
    // b=a-b;
    // a=a-b;
    // cout<<"a="<<a<<" "<<"b="<<b<<endl;

           // m4 xor bitwise method

    int a=5, b=6;
    a=a^b;
    b=b^a;
    a=a^b;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;

    return 0;
}