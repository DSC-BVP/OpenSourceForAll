#include <iostream>
using namespace std;
template <typename T>
class BinaryTreeNode{
public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;
    BinaryTreeNode(T data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};


BinaryTreeNode<int>* takeinput(){
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(data);
    root->left=takeinput();
    root->right=takeinput();
    return root;

}

void print(BinaryTreeNode<int>* root){
    cout<<root->data<<": ";
    if(root->left!=NULL){
        cout<<root->left->data<<" ";
    }
    if(root->right!=NULL){
        cout<<root->right->data<<" ";
    }
    cout<<endl;
    if(root->left!=NULL){
        print(root->left);
    }
    if(root->right!=NULL){
        print(root->right);
    }

}

int main() {
    BinaryTreeNode<int>* root=takeinput();
    print(root);
    return 0;
}
