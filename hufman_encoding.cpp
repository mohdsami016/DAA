#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node{
    char data;
    int freq;
    Node *left,*right;
    Node(char data,int freq){
        this->data=data;
        this->freq=freq;
        left=right=nullptr;
    }
};

struct Compare{
    bool operator()(Node* a,Node* b){
        return a->freq>b->freq;
    }
};

void printCodes(Node* root,string code){
    if(root==nullptr)return;
    if(root->left==nullptr&&root->right==nullptr){
        cout<<root->data<<" : "<<code<<endl;
        return;
    }
    printCodes(root->left,code+"0");
    printCodes(root->right,code+"1");
}

int main(){
    char data[]={'A','B','C','D','E','F'};
    int freq[]={5,9,12,13,16,45};
    int n=6;
    priority_queue<Node*,vector<Node*>,Compare> pq;

    for(int i=0;i<n;i++)
        pq.push(new Node(data[i],freq[i]));

    while(pq.size()>1){
        Node* left=pq.top();
        pq.pop();
        Node* right=pq.top();
        pq.pop();

        Node* parent=new Node('$',left->freq+right->freq);
        parent->left=left;
        parent->right=right;
        pq.push(parent);
    }

    Node* root=pq.top();
    cout<<"Huffman Codes:\n";
    printCodes(root,"");

    return 0;
}

