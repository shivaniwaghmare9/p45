
// // Online C++ compiler to run C++ program online
// //=============================DEFTH OF TREE(OR LONGEST PSTH OF TREE)===========================================================================================================
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
//     int height(node *h)
//     {
//         if(h==NULL)
//         {
//             return 0;
//         }
//         int left=height(h->l);
//         int right=height(h->r);
//         int result=max(left,right)+1;
//         return result;
//     }
// };
// int main() {
//     node *root=new node(10);
//     root->l=new node(20);
//     root->r=new node(30);
//     root->l->l=new node(40);
//     root->l->r=new node(50);
//     root->l->r->l=new node(60);
//     root->l->r->l->l=new node(80);
//     cout<<root->height(root);
// }


// Online C++ compiler to run C++ program online
//=============================DEFTH OF TREE(OR LONGEST PSTH OF TREE)===========================================================================================================
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
    int height(node *h)
    {
        if(h==NULL)
        {
            return 0;
        }
        int left=height(h->l);
        int right=height(h->r);
        int result=max(left,right)+1;
        return result;
    }
};
int main() {
    node *root=new node(10);
    root->l=new node(20);
    root->r=new node(30);
    root->l->l=new node(40);
    root->l->r=new node(50);
    root->l->r->l=new node(60);
    root->l->r->l->l=new node(80);
    cout<<root->height(root);
}