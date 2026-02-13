#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;

int frogjump(int n,vector<int>&height){
    if(n==2) return n;
    int prev2=0;
    int prev1=abs(height[1] - height[0]); 
    for(int i=2;i<n;i++){
        int one=prev1+abs(height[i]-height[i-1]);
        int two=INT_MAX;
        if(i>1)
           two=prev2+abs(height[i]-height[i-2]); 
           int curr=min(one,two);
           prev2=prev1;
           prev1=curr;

    }
    return prev1;
}
int main(){
    vector<int> height={10,20,40,10};
    int n=height.size();
    cout<<"minimumcost is"<< frogjump(n,height);
    return 0;
}