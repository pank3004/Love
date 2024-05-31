#include<iostream>
#include<vector>
using namespace std;

void printing(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

vector<int> twosComplementFn(vector<int> binary){
    int n=binary.size();

    vector<int> twosComplement(n+1,0);
    
    for(int i=n-1, k=twosComplement.size()-1; i>=0; i--, k--){
        twosComplement[k] = (binary[i] == 0) ? 1 : 0;
    }

    int carry=1;
    for(int i=twosComplement.size()-1; i>=0; i--){
        int sum=twosComplement[i]+carry;
        twosComplement[i]=sum%2;
        carry=sum/2;
    }

    return twosComplement;
}

vector<int> samebitsTwosComp(vector<int> binary){
    int n=binary.size();

    vector<int> twosComplement(n,0);
    
    for(int i=n-1; i>=0; i--){
        if(binary[i]==0){
            twosComplement[i]=1;
        }else{
            twosComplement[i]=0;
        }
    }

    int carry=1;
    for(int i=n-1; i>=0; i--){
        int sum=twosComplement[i]+carry;
        twosComplement[i]=sum%2;
        carry=sum/2;
    }

    return twosComplement; 
}
int main(){

    vector<int> binary={0,0,0,0,0};

    cout<<"binary vecotor: "<<endl;
    printing(binary);

// n+1 size
    cout<<"twos complement with n+1 size"<<endl;
    vector<int>twosComplement=twosComplementFn(binary);
    printing(twosComplement);

// same size
    // cout<<"twos complement with same size"<<endl;
    // vector<int>twosComplementt=samebitsTwosComp(binary);
    // printing(twosComplementt);

    return 0;
}