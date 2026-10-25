#include<iostream>
#include<vector>
using namespace std;

int climb_stairs(int n,vector<int>dp){
	if(n<=2)
		return n;
	if(dp[n]!=-1){
		return dp[n];
	}
	dp[n]=climb_stairs(n-1,dp)+climb_stairs(n-2,dp);
	return dp[n];
}
int main(){
	int n;
	cout<<"enter no of stairs :";
	cin>>n;
	vector<int>dp(n+1,-1);
	cout<<"\nNo of ways to climb stairs:"<<climb_stairs(n,dp);
	return 0;
}
