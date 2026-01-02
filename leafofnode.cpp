

// // Online C++ compiler to run C++ program online
// //=============================NUMBER OF LEAF NODE===========================================================================================================
// #include <iostream>
// using namespace std;
// class node{
//     public:int data;
//     node *l;
//     node *r;
//     node(int d)
//     {
//         data=d;
//         l=NULL;
//         r=NULL;
//     }
//   };
//   void preorder(node *n,int &c)
//   {
//       if(n==NULL)
//       {
//           return;
//       }
//       preorder(n->l,c);
//       preorder(n->r,c);
//       if(n->l==NULL && n->r==NULL)
//       {
//           c++;
//       }
//   }
// int main() {
//     int c=0;
//     node *n=new node(10);
//      n->l=new node(2);
//      n->r=new node(30);
//      n->l->l=new node(40);
//      n->l->r=new node(50);
//      n->l->r->l=new node(60);
//      n->l->r->l->l=new node(80);
//     preorder(n,c);
//     cout<<"total leaf node="<<c;
    
   
// }


// Online C++ compiler to run C++ program online
//=============================NUMBER OF LEAF NODE===========================================================================================================
#include <iostream>
using namespace std;
class node{
    public:int data;
    node *l;
    node *r;
    node(int d)
    {
        data=d;
        l=NULL;
        r=NULL;
    }
  };
  void preorder(node *n,int &c)
  {
      if(n==NULL)
      {
          return;
      }
      preorder(n->l,c);
      preorder(n->r,c);
      if(n->l==NULL && n->r==NULL)
      {
          c++;
      }
  }
int main() {
    int c=0;
    node *n=new node(10);
     n->l=new node(2);
     n->r=new node(30);
     n->l->l=new node(40);
     n->l->r=new node(50);
     n->l->r->l=new node(60);
     n->l->r->l->l=new node(80);
    preorder(n,c);
    cout<<"total leaf node="<<c;
    
   
}