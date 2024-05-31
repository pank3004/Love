#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<auto> v){
    cout<<"printing vector: "<<endl;

    for(auto it: v){
        cout<<it<<" ";     // this is the for each loop
    }

    cout<<endl;
}
int main(){
    vector<char> v;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    v.push_back('d');

    // cout<<"first elm: "<<v[0]<<endl;
    // cout<<"first elm: "<<v.front()<<endl;

    // cout<<"last elm: "<<v[v.size()-1]<<endl;
    // cout<<"first elm: "<<v.back()<<endl;

    printVector(v);

    vector<int> v2;
    v2.push_back(10);
    v2.push_back(20);
    v2.push_back(30);
    v2.push_back(40);

    printVector(v2);



    return 0;

}