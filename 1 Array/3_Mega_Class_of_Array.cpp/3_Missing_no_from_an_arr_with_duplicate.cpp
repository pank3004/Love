
// Assignment quesion missing vallue given duplicate array
#include<iostream>
#include<vector>
using namespace std;

void printing(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int visitingMethodStart1(vector<int> &v){
    v.insert(v.begin(), 813);
    //printing(v);

    for(int i=1; i<v.size(); i++){
        int index=abs(v[i]);
        if(v[index]>0){
            v[index]*=-1;
        }
    }
    int missing=-1;
    for(int i=1; i<v.size(); i++){
        if(v[i]>0){
            missing=i;
        }
    }
    return missing;
}


int main(){

    vector<int> v={1,2,5,3,4,7,2};
    cout<<"ans="<<visitingMethodStart1(v);   //[1,n]

    return 0;
}