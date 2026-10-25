#include<bits/stdc++.h>
using namespace std;

int LongestCommonSubSequence(string &A,string &B){
	int m=A.size();
	int n=B.size();
	vector<vector<int>> dp;
    dp.assign(m+1, vector<int>(n+1, 0));
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(A[i-1]==B[j-1]){
				dp[i][j]=1+dp[i-1][j-1];
			}
			else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	return dp[m][n];
}

int main(){
	string A,B;
	cout<<"enter string A :";
	cin>>A;
	cout<<"\nEnter string B :";
	cin>>B;
	cout<<"\nLength of LongestCommonSubSequence :"<<LongestCommonSubSequence(A,B);
	return 0;
}
