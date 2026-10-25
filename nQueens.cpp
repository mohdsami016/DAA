#include<bits/stdc++.h>
using namespace std;

bool is_safe(int row,int col,vector<string>&board,int n){
    int duprow=row;
    int dupcol=col;

    while(row>=0&&col>=0){
        if(board[row][col]=='Q')
            return false;
        row--;
        col--;
    }

    row=duprow;
    col=dupcol;

    while(col>=0){
        if(board[row][col]=='Q')
            return false;
        col--;
    }

    row=duprow;
    col=dupcol;

    while(row<n&&col>=0){
        if(board[row][col]=='Q')
            return false;
        row++;
        col--;
    }

    return true;
}

void solve(int col,int n,vector<string>&board,vector<vector<string>>&ans){
    if(col==n){
        ans.push_back(board);
        return;
    }

    for(int row=0;row<n;row++){
        if(is_safe(row,col,board,n)){
            board[row][col]='Q';
            solve(col+1,n,board,ans);
            board[row][col]='.';
        }
    }
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;

    vector<string> board(n,string(n,'.'));
    vector<vector<string>> ans;

    solve(0,n,board,ans);

    cout<<"Total solutions: "<<ans.size()<<"\n";

    for(int i=0;i<(int)ans.size();i++){
        cout<<"\nSolution "<<i+1<<":\n";
        for(int row=0;row<n;row++){
            cout<<ans[i][row]<<"\n";
        }
    }

    return 0;
}
