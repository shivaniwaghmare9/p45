

// Online C++ compiler to run C++ program online
//=====================================SINGLTY LINKEND LIST(OR FORWARDLIST)===============================================================================================================
#include <iostream>
using namespace std;
#include<forward_list>
int main() {
    forward_list<int>f;
    f.push_front(12);
    f.push_front(34);
    f.push_front(10);
    f.push_front(9);
    f.push_front(26);
    f.push_front(34);
    forward_list<int>f1;
    f1.push_front(11);
    f1.push_front(23);
    f1.push_front(1);
    f1.push_front(47);
    f1.push_front(2);
    f1.push_front(34);
    cout<<"list f value:";
    for(auto p:f){ //26 9 10 34 12 isme niche se data aata h niche vala phle fir ukse upar -------
        cout<<p<<"\t";
    }
    cout<<"\nlist f1 value:";
    for(auto p:f1){ //26 9 10 34 12 isme niche se data aata h niche vala phle fir ukse upar -------
        cout<<p<<"\t";
    }
    
     cout<<"\n Merge lists";
    f.merge(f1);
    for(auto p:f){
        cout<<p<<"\t";
    }
    // cout<<"\nAfter sorting merge\n";
    //  f.sort();
    // f1.sort();
    // f.merge(f1);
    // for(auto p:f){
    //     cout<<p<<"\t";
    // }
    
    cout<<"\nunique value:"; //unique value print nhii hogi  duplicate bhii print hogi isliye near by rhe mtlb ek ke bad ek rhegi to dup nhhi aayegi islye phale sort krna hoga 
    f.unique();
    for(auto p:f){
        cout<<p<<"\t";
    }
    cout<<"\nAfter sorting\n";
    f.sort();
    for(auto p:f){
        cout<<p<<"\t";
    }
     cout<<"\nAfter sorting unqiue value\n";
    f.unique();      //after sorting dup not print
    for(auto p:f){
        cout<<p<<"\t";
    }
    cout<<"\nAfter reverse:";
    f.reverse();
    for(auto p:f){
        cout<<p<<"\t";
    }
    
}