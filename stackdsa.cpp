// Online C++ compiler to run C++ program online
//====================================STACK======================================================================
#include <iostream>
using namespace std;
#include<stack>
int main() {
    stack<int>st;
    st.push(32);
    st.push(22);
    st.push(12);
    st.push(42);
    st.push(52); 
    st.push(25);
    while(!st.empty()){
        cout<<st.top()<<"\t";
        st.pop();
    }
}
// Online C++ compiler to run C++ program online
//====================================STACK======================================================================
#include <iostream>
using namespace std;
#include<stack>
int main() {
    stack<int>st;
    // st.push(32);
    // st.push(22);
    // st.push(12);
    // st.push(42);
    // st.push(52); 
    // st.push(25);
    // while(!st.empty()){
    //     cout<<st.top()<<"\t";
    //     st.pop();
    // }
    //user se input
    int n,a;
    cout<<"enter how many values\n";
    cin>>n;
    for(int i=1; i<=n;i++){
        cout<<"enter value\n";
        cin>>a;
        st.push(a);
        
    }
    // while(!st.empty()){
    //     cout<<st.top()<<"\t";
    //     st.pop();
    // }
    //====================smallest value==================================================================
    int x=st.top();
    while(!st.empty()){
        if(x>=st.top()){//samalest value or x<=st.top() to highest value
            x=st.top();
        }
        st.pop();
    }
    cout<<"result="<<x<<"\t";
   
}