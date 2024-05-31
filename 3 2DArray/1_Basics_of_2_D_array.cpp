#include<iostream>
using namespace std;


void printRowWise(int arr[][3], int rowSize, int colSize){
    cout<<"Array printing row wise: "<<endl;
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void printColumnWise(int arr[][3], int rowSize, int colSize){
    cout<<"Array printing column wise: "<<endl;
    for(int j=0; j<colSize; j++){
        for(int i=0; i<rowSize; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void printMainDiagonal(int arr[][3], int rowSize, int colSize){
    cout<<"Array printing main diagonal: "<<endl;

                //  M1

    // for(int i=0; i<rowSize; i++){
    //     for(int j=0; j<colSize; j++){
    //         if(i==j){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

                // M2

    for(int i=0; i<rowSize; i++){    
            cout<<arr[i][i]<<endl;       
    }

}

void printLeadingDiagonal(int arr[][3], int rowSize, int colSize){
    // square matirx so rowSize=colSize

    cout<<"Array printing Leading0 diagonal: "<<endl;
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            if(i+j==rowSize-1){
                cout<<arr[i][j]<<endl;
            }
        }
    }

}


int main(){
    int arr[3][3]={ {11,22,33},
                    {10,20,30},
                    {40,50,60}};

    //printRowWise(arr, 3, 3);
    //printColumnWise(arr, 3, 3);
    printMainDiagonal(arr,3,3);
    //printLeadingDiagonal(arr, 3,30);

    return 0;
}