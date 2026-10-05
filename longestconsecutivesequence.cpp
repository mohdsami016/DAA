#include<bits/stdc++.h>
using namespace std;

int longestconsecutivesequence(vector<int>&a){
	unordered_set<int>numset(a.begin(),a.end());
	int longest=0;
	for(int x:numset){
		if(numset.find(x-1)==numset.end()){
			int length=1;
			while(numset.find(x+length)!=numset.end()){
				length++;
			}
			longest=max(longest,length);
		}
	}
	return longest;
}

int main(){
	int n;
	cout<<"enter n :";
	cin>>n;
	vector<int>a(n);
	cout<<"\nenter vector values:\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"\nLength of longestconsecutivesequence"<<longestconsecutivesequence(a);
	return 0;
}
