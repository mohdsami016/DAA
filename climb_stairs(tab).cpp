#include<iostream>
using namespace std;

int climb_stairs(int n){
	if(n<=2){
		return n;
	}
	int dp[n+1];
	dp[1]=1;
	dp[2]=2;
	for(int i=3;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}
int main(){
	int n;
	cout<<"enter no of stairs :";
	cin>>n;
	cout<<"\nNo of ways to climb stairs:"<<climb_stairs(n);
	return 0;
}
