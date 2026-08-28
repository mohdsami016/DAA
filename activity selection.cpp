#include <iostream>
using namespace std;

int main(){
    int s[]={0,1,4,2,5,3,4};
    int f[]={3,4,2,6,9,5,5};
    int n=6;

    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(f[i]>f[j]){
                swap(f[i],f[j]);
                swap(s[i],s[j]);
            }

    int last=-1;

    cout<<"Selected activities: ";

    for(int i=0;i<n;i++){
        if(s[i]>=last){
            cout<<i+1<<" ";
            last=f[i];
        }
    }

    return 0;
}
