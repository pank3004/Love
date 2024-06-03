/*Q. Given two integers one is a dividend and the other is the divisor,
    we need to find the quotient when the dividend is divided by the divisor 
    without the use of any ” / “ and ” % “ operators


Input: dividend = 10, divisor = 2
Output: 5
Explanation: 10/2 = 5.

Input: dividend = 10, divisor = 3
Output: 3
Explanation: 10/3 = 3.33333… which is truncated to 3.

Input: dividend = 10, divisor = -2
Output: -5
Explanation: 10/-2 = -5

*/

#include<iostream>
using namespace std;
int getQuotiont(int dividend, int divisor){
    int s=0;
    int e=dividend;

    int ans=-1;
    while(s<=e){
        int mid=s+((e-s)>>1);

        if((divisor*mid)==dividend){
            return ans;
        }
        else if((divisor*mid)<dividend){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }

    }
    return ans;
    
}
int main(){
    int dividend=13;
    int divisor=3;
    int ans=getQuotiont(abs(dividend), abs(divisor));
 
    cout<<"final ans="<<ans<<endl;
    return 0;
}