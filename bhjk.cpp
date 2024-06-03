           // binary search + linear search

#include<iostream>
using namespace std;

// int intPart(int num){
//     int s=0;
//     int e=num;
//     int ans=-1;
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(mid*mid==num){
//             return mid;
//         }
//         else if(mid*mid<num){
//             ans=mid;
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//     }
//     return ans;
// } 
// double precisionLinearSearch(int num, int precision){
//     double sqrt=intPart(num);
//     double step=0.1;

//     while(precision--){
//         double temp=sqrt;
//         while(temp*temp<=num){
//             sqrt=temp;
//             temp=temp+step;
//         }
//         step=step/10;
//     }
//     return sqrt;
// }
double precisionBS(int num){
    double s = 0;
    double e = num;
    double ans = 0;
    while ((e - s) >= 0.00001) {
        double mid = (s + e) / 2;
        if (mid * mid <= num) {
            ans = mid;
            s = mid;
        } else {
            e = mid;
        }
    }
    
    return ans;
}


int main(){
    int num=63;
    int precision=13;

    // double ans=precisionLinearSearch(num, precision);
    // cout<<"precision sqrt ="<<ans<<endl;  // cout only give till 5 precision
    // printf("precision ans=%f\n",ans);    //  till 6 precision
    // printf("precision ans=%0.9f\n",ans);    // till 9 precison  
    // printf("precision ans=%0.13f\n",ans);    // till 13 precison 

    double anss=precisionBS(num);
    cout<<"precision sqrt ="<<anss<<endl;  


    return 0;
}