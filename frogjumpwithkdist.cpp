#include<iostream>
#include<vector>
using namespace std;
int frogjump(int k,vector<int>&height){
    int n=height.size();
    vector<int>dp(n,INT_MAX);
    dp[0]=0;
    for(int i=1;i<n;i++){
        for(int j=1;j<=k;j++){
            if(i-j>=0){
                int cost=dp[i-j]+abs(height[i]-height[i-1]);
                dp[i]=min(dp[i],cost);
            }
        }

    }return dp[n-1];
}
int main(){
    vector<int>height={10,20,40,10};
    int k=2;
    cout<<"frogjump with k dist"<<frogjump(k,height);
    return 0;
}