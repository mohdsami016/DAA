#include<bits/stdc++.h>
using namespace std;

bool subsetSum(vector<int>&a,int in,int rem){
	if(rem==0){
		return true;
	}
	if(in==a.size()||rem<0){
		return false;
	}
	if(subsetSum(a,in+1,rem-a[in]))
	 return true;
	return subsetSum(a,in+1,rem);
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
 
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
 
    int target;
    cout << "Enter target sum: ";
    cin >> target;
 
    bool result = subsetSum(arr, 0, target);
 
    cout << (result ? "A subset with the given sum exists." : "No such subset exists.") << endl;
 
    return 0;
}

