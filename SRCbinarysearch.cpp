
// Online C++ compiler to run C++ program online
//===============================(BINARY SEARCH TREE SELF REFRENCE CLASS)==========================================================================================
#include <iostream>
using namespace std;
class node
{
    public:int data;
    node *l,*r;
    node(int d){
        data=d;
        l=NULL;
        r=NULL;
    }
    
};
node *create(node *root,int v)
{
    if(root==NULL)
    {
        return new node(v);
    }
    if(v<root->data)
    {
        root->l=create(root->l,v);
    }
    else
    {
        root->r=create(root->r,v);
    }
    return root;
}
void inorder(node *root)
{
    if(root==NULL)
    {
        return ;
    }
    inorder(root->l);
    cout<<root->data<<"\t";
    inorder(root->r);
}
int main() {
    node *root=NULL;
    int n,val;
    cout<<"how many nodes\n";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>val;
        root=create(root,val);
    }
   cout<<"inorder data\n";
   inorder(root);
}