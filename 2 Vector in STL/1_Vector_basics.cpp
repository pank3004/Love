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
    vector<int> v;

                    // CAPACITY AND SIZE

    // while(1){
    //     cout<<"Enter the value for push: ";
    //     int d; 
    //     cin>>d;
    //     v.push_back(d);
    //     cout<<"capicity="<<v.capacity()<<" "<<"size="<<v.size()<<endl;
    // }

                     // v.push_back()

    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // printVector(v);

                    // v.pop_back()

    // v.pop_back();
    // v.pop_back();
    // v.pop_back();
    // v.pop_back();   // kuch bacha hi nhi h to kya amrudh nikalega vector se
    // printVector(v);



                    // ENTER INPUT IN THE VECTOR


    cout<<"Enter the size of the vector: ";
    int n;
    cin>>n;
    cout<<"Enter the emls: ";

    for(int i=0; i<n; i++){
        int d; cin>>d;
        v.push_back(d);
    }

    printVector(v);
                    // we can also add some more data

    // cout<<"Enter some more 6 elm here: "<<end;
    // for(int i=0 ;i<6; i++){
    //     int d;cin>>d;
    //     v.push_back(d); 
    // }
    // printVector(v);



                        // if we want to clear all the vector
    
    v.clear();
    v.push_back(50);
    printVector(v);
    cout<<"capicity="<<v.capacity()<<" "<<"size="<<v.size()<<endl; 

    
    return 0;
}