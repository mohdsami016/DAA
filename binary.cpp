#include<iostream>
using namespace std;
int binary(int arr[],int n,int key){
	int low = 0;
	int high = n-1;
	while(low<=high){
		int mid = low+(high-low)/2;
		if(arr[mid]==key)
		return mid;
		else if(arr[mid]<key)
		low = mid+1;
		else
		high = mid-1;
	}
	return-1;
 }
 int main(){
 	int n, key;
 	int arr[100];
 	cout<<"enter size of array:";
 	cin>>n;
 	cout<<"enter"<<n<<"elements in sorted order:";
 	for(int i=0;i<=n;i++)
 	cin>>arr[i];
 	cout<<"enter the elements:";
 	cin>>key;
 	int index = binary(arr,n,key);
 	if(index!=-1)
 	cout<<key<<"found at the index"<<index<<endl;
 	else
 	cout<<key<<"not found"<<endl;
 	return 0;
 }
