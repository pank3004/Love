#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> v){
    cout<<"printing the vector: ";
    int size=v.size();
    for(int i=0; i<size; i++){
        //cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;   // default with no data , 0 size
    v={5,3,45,52,34,1};
    printVector(v);


    // vector<int> v2(5,-1);  // initialze with 5 size and -1 value 
    // printVector(v2);
    // v2.push_back(80);
    // v2.push_back(70);
    // printVector(v2);


    // vector<int> v3={3,4,5,6,7};
    // printVector(v3);
    // v3.pop_back();
    // printVector(v3);


    // vector<int> v4{3,4,6,7,88,96};
    // printVector(v4);


             // how to copy the vector

    // vector<int> v5{58,8,63,6,25,54};
    // vector<int> v6(v5); 
    // printVector(v5);
    // printVector(v6);
    // v6.pop_back();
    // printVector(v5);
    // printVector(v6);


    return 0;
}