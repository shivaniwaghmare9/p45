// // Online C++ compiler to run C++ program online
// //====================================STACK======================================================================
// #include <iostream>
// using namespace std;
// #include<stack>
// int main() {
//     stack<int>st;
//     st.push(32);
//     st.push(22);
//     st.push(12);
//     st.push(42);
//     st.push(52); 
//     st.push(25);
//     while(!st.empty()){
//         cout<<st.top()<<"\t";
//         st.pop();
//     }
// }
// // Online C++ compiler to run C++ program online
// //====================================STACK======================================================================
// #include <iostream>
// using namespace std;
// #include<stack>
// int main() {
//     stack<int>st;
//     // st.push(32);
//     // st.push(22);
//     // st.push(12);
//     // st.push(42);
//     // st.push(52); 
//     // st.push(25);
//     // while(!st.empty()){
//     //     cout<<st.top()<<"\t";
//     //     st.pop();
//     // }
//     //user se input
//     int n,a;
//     cout<<"enter how many values\n";
//     cin>>n;
//     for(int i=1; i<=n;i++){
//         cout<<"enter value\n";
//         cin>>a;
//         st.push(a);
        
//     }
//     // while(!st.empty()){
//     //     cout<<st.top()<<"\t";
//     //     st.pop();
//     // }
//     //====================smallest value==================================================================
//     int x=st.top();
//     while(!st.empty()){
//         if(x>=st.top()){//samalest value or x<=st.top() to highest value
//             x=st.top();
//         }
//         st.pop();
//     }
//     cout<<"result="<<x<<"\t";
   
// }
// // Online C++ compiler to run C++ program online
// //====================================stacks=========================================================================================
// #include <iostream>
// using namespace std;
// class stacks{
//     public:int *arr;
//     int n,top;
//     stacks(int s)
//     {
//         n=s;
//         arr=new int[n];
//         top=-1;
//     }
//     void pushs(int v)
//     {
//         if(top==n-1)
//         {
//             cout<<"overflow";
//             return ;
//         }
//         top++;
//         arr[top]=v;
//     }
//     int pops()
//     {
//         if(top==-1)
//         {
//             cout<<"under flow";
//             return 0;
//         }
//         return top--;
//     }
//     int tops()
//     {
//         if(top==-1){
//             cout<<"there is no element";
//             return 0;
//         }
//         return arr[top];
//     }
    
// };
// int main() {
//     int s,v;
//     cout<<"enter size of array\n";
//     cin>>s;
//     stacks st(s);
//     for(int i=1; i<=s; i++){
//         cout<<"enter the value\n";
//         cin>>v;
//         st.pushs(v);
//     }
//     // while(st.top!=-1){
//     //     cout<<st.tops()<<"\t";
//     //     st.pops();
//     // }
//     cout<<"top element="<<st.tops();
//     // cout<<"top value="<<st.tops()<<"\t";
//     // st.pops();
//     // cout<<st.tops();
   
// }

// // Online C++ compiler to run C++ program online
// //====================================stacks=========================================================================================
// #include <iostream>
// using namespace std;
// class stacks{
//     public:int *arr;
//     int n,top;
//     stacks(int s)
//     {
//         n=s;
//         arr=new int[n];
//         top=-1;
//     }
//     void pushs(int v)
//     {
//         if(top==n-1)
//         {
//             cout<<"overflow";
//             return ;
//         }
//         top++;
//         arr[top]=v;
//     }
//     int pops()
//     {
//         if(top==-1)
//         {
//             cout<<"under flow";
//             return 0;
//         }
//         return top--;
//     }
//     int tops()
//     {
//         if(top==-1){
//             cout<<"there is no element";
//             return 0;
//         }
//         return arr[top];
//     }
    
// };
// int main() {
//     int s,v;
//     cout<<"enter size of array\n";
//     cin>>s;
//     stacks st(s);
//     for(int i=1; i<=s; i++){
//         cout<<"enter the value\n";
//         cin>>v;
//         st.pushs(v);
//     }
//     cout<<"after push:";
//     st.pushs(12);            //overflow because size se jyada element insert ho gya
   
//     // while(st.top!=-1){
//     //     cout<<st.tops()<<"\t";
//     //     st.pops();
//     // }
//    // cout<<"top element="<<st.tops()<<"\n";
//     cout<<"\ntop value="<<st.tops()<<"\t";
//     cout<<"\nafter pop elment of top:";
//     st.pops();
//     cout<<st.tops()<<"\n";
//      st.pops();
//     cout<<st.tops()<<"\n";
//      st.pops();
//     cout<<st.tops()<<"\n";    //there is no element
//     st.pops();
//     cout<<st.tops()<<"\n";    //underflow because -1 pr pops aa gya
   
// }
// // Online C++ compiler to run C++ program online
// //===================================STACKS=========================================================================================
// #include <iostream>
// using namespace std;
// class stacks
// {
//     public:int *arr;
//     int n,top;
//     stacks(int s)
//     {
//        n=s;
//        arr=new int[n];
//        top=-1;
//     }
//     void pushs(int v)
//     {
//         if(top==n-1)
//         {
//             cout<<"overflow";
//             return ;
//         }
       
//             top++;
//             arr[top]=v;
//     }

//     int pops()
//     {
//         if(top==-1)
//         {
//             cout<<"under flow";
//             return 0;
//         }
        
//            return top--; 
        
//     }
//     int tops(){
//         if(top==-1)
//         {
//             cout<<"there no element";
//             return 0;
//         }
//         return arr[top];
//     }
    
// };
// int main() {
//     int s,v;
//     cout<<"enter size of arrays\n";  //ydi size 3 dalge to
//     cin>>s;
//     stacks st(s);
//     for(int i=1; i<=s; i++)
//     {
//         cout<<"enter the value\n";    //value 1 2 3 insert karege to
//         cin>>v;
//         st.pushs(v);
        
//     }
   
//     st.pushs(12);  //overflow qki size se jyada value insert kr di
//     //  while(st.top!=-1){
//     //     cout<<st.tops()<<"\t";
//     //     st.pops();
//     // }
//     cout<<"\ntop element:"<<st.tops();   //3
//     cout<<"\nAfter pop element of top:";//2
//     st.pops();
//     cout<<st.tops();
//      cout<<"\nthan After pop element of top:"; //1
//     st.pops();
//     cout<<st.tops();
//      cout<<"\nonce After pop element of top:";////there is no element
//     st.pops();
//     cout<<st.tops();
//     cout<<"\nalso once After pop element of top:";//underflow qki deletation -1 pr a gya
//     st.pops();
//     cout<<st.tops();
     
   
// }

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
// Online C++ compiler to run C++ program online
//====================================stacks=========================================================================================
#include <iostream>
using namespace std;
class stacks{
    public:int *arr;
    int n,top;
    stacks(int s)
    {
        n=s;
        arr=new int[n];
        top=-1;
    }
    void pushs(int v)
    {
        if(top==n-1)
        {
            cout<<"overflow";
            return ;
        }
        top++;
        arr[top]=v;
    }
    int pops()
    {
        if(top==-1)
        {
            cout<<"under flow";
            return 0;
        }
        return top--;
    }
    int tops()
    {
        if(top==-1){
            cout<<"there is no element";
            return 0;
        }
        return arr[top];
    }
    
};
int main() {
    int s,v;
    cout<<"enter size of array\n";
    cin>>s;
    stacks st(s);
    for(int i=1; i<=s; i++){
        cout<<"enter the value\n";
        cin>>v;
        st.pushs(v);
    }
    // while(st.top!=-1){
    //     cout<<st.tops()<<"\t";
    //     st.pops();
    // }
    cout<<"top element="<<st.tops();
    // cout<<"top value="<<st.tops()<<"\t";
    // st.pops();
    // cout<<st.tops();
   
}

// Online C++ compiler to run C++ program online
//====================================stacks=========================================================================================
#include <iostream>
using namespace std;
class stacks{
    public:int *arr;
    int n,top;
    stacks(int s)
    {
        n=s;
        arr=new int[n];
        top=-1;
    }
    void pushs(int v)
    {
        if(top==n-1)
        {
            cout<<"overflow";
            return ;
        }
        top++;
        arr[top]=v;
    }
    int pops()
    {
        if(top==-1)
        {
            cout<<"under flow";
            return 0;
        }
        return top--;
    }
    int tops()
    {
        if(top==-1){
            cout<<"there is no element";
            return 0;
        }
        return arr[top];
    }
    
};
int main() {
    int s,v;
    cout<<"enter size of array\n";
    cin>>s;
    stacks st(s);
    for(int i=1; i<=s; i++){
        cout<<"enter the value\n";
        cin>>v;
        st.pushs(v);
    }
    cout<<"after push:";
    st.pushs(12);            //overflow because size se jyada element insert ho gya
   
    // while(st.top!=-1){
    //     cout<<st.tops()<<"\t";
    //     st.pops();
    // }
   // cout<<"top element="<<st.tops()<<"\n";
    cout<<"\ntop value="<<st.tops()<<"\t";
    cout<<"\nafter pop elment of top:";
    st.pops();
    cout<<st.tops()<<"\n";
     st.pops();
    cout<<st.tops()<<"\n";
     st.pops();
    cout<<st.tops()<<"\n";    //there is no element
    st.pops();
    cout<<st.tops()<<"\n";    //underflow because -1 pr pops aa gya
   
}
// Online C++ compiler to run C++ program online
//===================================STACKS=========================================================================================
#include <iostream>
using namespace std;
class stacks
{
    public:int *arr;
    int n,top;
    stacks(int s)
    {
       n=s;
       arr=new int[n];
       top=-1;
    }
    void pushs(int v)
    {
        if(top==n-1)
        {
            cout<<"overflow";
            return ;
        }
       
            top++;
            arr[top]=v;
    }

    int pops()
    {
        if(top==-1)
        {
            cout<<"under flow";
            return 0;
        }
        
           return top--; 
        
    }
    int tops(){
        if(top==-1)
        {
            cout<<"there no element";
            return 0;
        }
        return arr[top];
    }
    
};
int main() {
    int s,v;
    cout<<"enter size of arrays\n";  //ydi size 3 dalge to
    cin>>s;
    stacks st(s);
    for(int i=1; i<=s; i++)
    {
        cout<<"enter the value\n";    //value 1 2 3 insert karege to
        cin>>v;
        st.pushs(v);
        
    }
   
    st.pushs(12);  //overflow qki size se jyada value insert kr di
    //  while(st.top!=-1){
    //     cout<<st.tops()<<"\t";
    //     st.pops();
    // }
    cout<<"\ntop element:"<<st.tops();   //3
    cout<<"\nAfter pop element of top:";//2
    st.pops();
    cout<<st.tops();
     cout<<"\nthan After pop element of top:"; //1
    st.pops();
    cout<<st.tops();
     cout<<"\nonce After pop element of top:";////there is no element
    st.pops();
    cout<<st.tops();
    cout<<"\nalso once After pop element of top:";//underflow qki deletation -1 pr a gya
    st.pops();
    cout<<st.tops();
     
   
}