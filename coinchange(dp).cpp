#include<bits/stdc++.h>
using namespace std;

int coinchange(vector<int>&coins,int amount){
	int dp(amount+1.INT_MAX);
	dp[0]=0;
	for(int i=1;i<=amount;i++){
		for(int c:coins){
			if(c<=amount&&dp[i-c]!=INT_MAX){
				dp[i]=min(dp[i],dp[i-c]+1);
			}
		}
	}
	return dp[amount]==INT_MAX?-1:dp[amount;];
}
int main(){
	int n;
	cout<<"enter n value\n";
	cin>>n;
	vector<int>coins(n);
	cout<<"\nenter coins:\n";
	for(int i=0;i<n;i++){
		cin>>coins[i];
	}
	result=coinchange(coins,20);
	cout<<result;
	return 0;
}
