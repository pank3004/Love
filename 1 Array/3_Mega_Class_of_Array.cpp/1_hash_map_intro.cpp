#include<iostream>
#include<unordered_map> 
using namespace std;
int main(){
    unordered_map<int, int> desk_map;

    desk_map[1]=34;
    desk_map[2]=56;
    desk_map[3]=54;
    desk_map[4]=67;

    desk_map[3]=78;

    unordered_map<int, int>::iterator it;

                  // M1
    // for(it=desk_map.begin(); it!=desk_map.end(); it++){
    //     int key=it->first;
    //     int value=it->second;
    //     cout<<"key="<<key<<"value="<<value<<endl;
    // }

                // M2

    for(auto it:desk_map){
        int key=it.first;
        int value=it.second;
        cout<<"key="<<key<<"value="<<value<<endl;
    }
    
    // find ,,,,,,,,,O(1)--> average case

    if(desk_map.find(2)!=desk_map.end()){
        int value=desk_map[2];
        cout<<"value="<<value<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }

    desk_map.erase(2);
    cout<<"After erase"<<endl;


    if(desk_map.find(2)!=desk_map.end()){
        int value=desk_map[2];
        cout<<"value="<<value<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }


    return 0;
}