#include<iostream>
using namespace std;

int maxsum(vector<int>&ans){
    int n=ans.size();
    if(n==1) return ans[0];
    vector<int> dp(n);
    dp[0]=ans[0];
    dp[1]=max(ans[0],ans[1]);
    for(int i=2;i<n;i++){
        dp[i]=max(ans[i]+dp[i-2],dp[i-1]);
    }
    return dp[n-1];
}
int main(){
    vector<int>ans={4,1,8,9};
    cout<<" max sum of non adj elements : "<<maxsum(ans);
    return 0;
}