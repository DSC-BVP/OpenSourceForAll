#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class treenode
{
public:
    int data;
    vector<treenode*> children;
    treenode(int data)
    {
        this->data=data;
    }
};

treenode*takeinputlw()
{
    int data;
    cin>>data;
    treenode*root=new treenode(data);
    queue<treenode*> q;
    q.push(root);

    while(q.size()!=0)
    {
        treenode*frontnode=q.front();
        q.pop();
        int num;
        cin>>num;

        for(int i=0;i<num;i++)
        {
            int cdata;
            cin>>cdata;
            treenode* child=new treenode(cdata);
            frontnode->children.push_back(child);
            q.push(child);
        }
    }
    return root;
}



treenode*takeinput()
{
    int data,num;
    cin>>data;
    cin>>num;

    treenode*root=new treenode(data);

    for(int i=0;i<num;i++)
    {
        treenode*cnode=takeinput();
        root->children.push_back(cnode);
    }

    return root;
}

void printa1(treenode*root)
{
     cout<<root->data<<": ";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<" ";
    }
    cout<<endl;

     for(int i=0;i<root->children.size();i++)
    {
      printa1(root->children[i]);
    }


}


void printa2(treenode*root)
{

     for(int i=0;i<root->children.size();i++)
    {
      printa2(root->children[i]);
    }

     cout<<root->data<<": ";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<" ";
    }
    cout<<endl;
}

int main()
{
   /* treenode*root=new treenode(10);
    treenode*node1=new treenode(1);
    treenode*node2=new treenode(2);

    root->children.push_back(node1);
    root->children.push_back(node2); */

    treenode*root=takeinputlw();


    printa1(root);

    cout<<endl;

    printa2(root);

    return 0;
}
