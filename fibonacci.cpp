#include<iostream>
#include<vector>
using namespace std;

int fib(int n,vector<int>&dp){
    if(n<=1) return n;
    if(dp[n]!=-1)
       return dp[n];
    dp[n]=fib(n-1,dp)+fib(n-2,dp);
    return dp[n];
}
int main() {
    int n = 10;

    vector<int> dp(n + 1, -1);  // Initialize dp array with -1
    cout << "Fibonacci(" << n << ") = " << fib(n, dp);

    return 0;
}


// space optimization
// int fib(int n ,vector<int>&dp){
//     if(n<=1) return n;
//     int prev2=0;
//     int prev1=1;
//     for(int i=2;i<n;i++){
//          int curr=prev2+prev1;
//          prev2=prev1;
//          prev1=curr;
//     }
//   return prev1;
// }