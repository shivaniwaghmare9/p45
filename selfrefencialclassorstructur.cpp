
// // Online C++ compiler to run C++ program online
// //======================================SELF REFRENCEIAL CLASS================================================================================================
// #include <iostream>
// using namespace std;

// class node
// {
// public:int data;
// node *l;
// node *r;
// public:node(int d)
// {
//  data=d;
//  l=NULL;    
//  r=NULL;
// }
    
// };
// int main() {
//     node *root=new node(10);
//     root->l=new node(20);
//     root->r=new node(30);
//     //=====pre order======
//      cout<<root->data<<"\n";  
//     cout<<root->l->data<<"\n";
//     cout<<root->r->data<<"\n";
    
//      //=====In order======
     
//     cout<<root->l->data<<"\n";
//     cout<<root->data<<"\n";  
//     cout<<root->r->data<<"\n";
    
//      //=====post order======
     
//     cout<<root->l->data<<"\n";
//     cout<<root->r->data<<"\n";
//     cout<<root->data<<"\n";  
   
// }

// // Online C++ compiler to run C++ program online
// //======================================SELF REFRENCEIAL CLASS(with function)================================================================================================
// #include <iostream>
// using namespace std;

// class node
// {
// public:int data;
// node *l;
// node *r;
// public:node(int d)
// {
//  data=d;
//  l=NULL;    
//  r=NULL;
// }
    
// };
// void preorder(node *root)
// {
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<"\t";
//     preorder(root->l);
//     preorder(root->r);
// }

// void inorder(node *root)
// {
//      if(root==NULL){
//         return;
//     }
   
//     inorder(root->l);
//      cout<<root->data<<"\t";
//     inorder(root->r);
// }

// void postorder(node *root)
// {
//      if(root==NULL){
//         return;
//     }
   
//     postorder(root->l);
//     postorder(root->r);
//     cout<<root->data<<"\t";
// }
// int main() {
//     node *root=new node(10);
//     root->l=new node(20);
//     root->r=new node(30);
//       cout<<"\npreorder\n";
//      preorder(root);
//      cout<<"\ninorder\n";
//      inorder(root);
//      cout<<"\npostorder\n";
//      postorder(root);
// }


// Online C++ compiler to run C++ program online
//======================================SELF REFRENCEIAL CLASS================================================================================================
#include <iostream>
using namespace std;

class node
{
public:int data;
node *l;
node *r;
public:node(int d)
{
 data=d;
 l=NULL;    
 r=NULL;
}
    
};
int main() {
    node *root=new node(10);
    root->l=new node(20);
    root->r=new node(30);
    //=====pre order======
     cout<<root->data<<"\n";  
    cout<<root->l->data<<"\n";
    cout<<root->r->data<<"\n";
    
     //=====In order======
     
    cout<<root->l->data<<"\n";
    cout<<root->data<<"\n";  
    cout<<root->r->data<<"\n";
    
     //=====post order======
     
    cout<<root->l->data<<"\n";
    cout<<root->r->data<<"\n";
    cout<<root->data<<"\n";  
   
}

// Online C++ compiler to run C++ program online
//======================================SELF REFRENCEIAL CLASS(with function)================================================================================================
#include <iostream>
using namespace std;

class node
{
public:int data;
node *l;
node *r;
public:node(int d)
{
 data=d;
 l=NULL;    
 r=NULL;
}
    
};
void preorder(node *root)
{
    if(root==NULL){
        return;
    }
    cout<<root->data<<"\t";
    preorder(root->l);
    preorder(root->r);
}

void inorder(node *root)
{
     if(root==NULL){
        return;
    }
   
    inorder(root->l);
     cout<<root->data<<"\t";
    inorder(root->r);
}

void postorder(node *root)
{
     if(root==NULL){
        return;
    }
   
    postorder(root->l);
    postorder(root->r);
    cout<<root->data<<"\t";
}
int main() {
    node *root=new node(10);
    root->l=new node(20);
    root->r=new node(30);
      cout<<"\npreorder\n";
     preorder(root);
     cout<<"\ninorder\n";
     inorder(root);
     cout<<"\npostorder\n";
     postorder(root);
}

