#include<bits/stdc++.h>
using namespace std;

vector<int> sum(vector<int>&a,int target){
	unordered_map<int,int>map;
	for(int i=0;i<a.size();i++){
		int complement=target-a[i];
		if(map.find(complement)!=map.end()){
			return{map[complement],i};
		}
		map[a[i]]=i;
	}
	return{};
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
	int t;
	cout<<"\nenter target :";
	cin>>t;
	vector<int>result=sum(a,t);
	cout<<"\nIndices :"<<result[0]<<" ,"<<result[1];
	return 0;
}
