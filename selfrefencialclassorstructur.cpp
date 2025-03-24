
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
    cout<<root->data<<"\n";                              //output=10 20 30
    cout<<root->l->data<<"\n";
    cout<<root->r->data<<"\n";
   
}