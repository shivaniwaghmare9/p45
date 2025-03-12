
// Online C++ compiler to run C++ program online
//=====================================DOUBLY LINKED LIST(OR LIST)====================================================================================================================
#include <iostream>
using namespace std;
#include<list>
#include<algorithm>  //inbuilt find function
int main() {
 list<int>l1;
 l1.push_front(12); 
 l1.push_front(22);
 l1.push_front(1);
 l1.push_front(42);
 l1.push_front(2);
for(auto p:l1){
    cout<<p<<"\t";
}

auto it1=l1.begin();
advance(it1,2);
l1.erase(it1);  //delete
auto it2=l1.begin();
advance (it2,1);
l1.insert(it2,900); //insert
auto it3=l1.begin();
advance(it3,4);
*it3=5000; //update
cout<<"\nafter deletion,insetion,updation\n";
for(auto p:l1){
    cout<<p<<"\t";
}
auto t=find(l1.begin(),l1.end(),50);
if(t!=l1.end()){
    cout<<"found="<<*t; //derefrance 
}
else{
    cout<<"not found";
}
 
}