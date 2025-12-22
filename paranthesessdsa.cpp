

// // Online C++ compiler to run C++ program online
// //=========================================paranthesess=================================================================================================
// #include <iostream>
// using namespace std;
// int valid(string s)
// {
//     if(s.size()<=4)
//     {
//         return 0;
//     }
//     else
//     {
//         return 1;
//     }
// }
// int main() 
// {
//     string s;
//     cout<<"enter name\n";
//     cin>>s;
//     bool j=valid(s);
//     if(j){
//         cout<<"valid";
//     }
//     else{
//         cout<<"invalid";
//     }
// }
// // Online C++ compiler to run C++ program online
// //====================================================PARANTHESESS=================================================================================================================================================================================================
// #include <iostream>
// using namespace std;
// #include<stack>
// bool pvalid(string s)
// {
//     stack<char>stk;
//     bool r=true;
//     for(int i=0; i<s.size(); i++)
//     {
//         if(s[i]=='{' || s[i]=='(' || s[i]=='[')
//         {
//             stk.push(s[i]);
//         }
//         else if(s[i]=='}')
//         {
//             if(!stk.empty()&& stk.top()=='{')
//             {
//                 stk.pop();
//             }
//             else
//             {
//                 r=false;
//                 break;
//             }
//         }
            
//             else if(s[i]==')')
//         {
//             if(!stk.empty()&& stk.top()=='(')
//             {
//                 stk.pop();
//             }
//             else
//             {
//                 r=false;
//                 break;
//             }
//         }
//             else if(s[i]==']')
//         {
//             if(!stk.empty()&& stk.top()=='[')
//             {
//                 stk.pop();
//             }
//             else
//             {
//                 r=false;
//                 break;
//             }
//         }
//     }
//         if(!stk.empty())
//         {
//             return false;
//         }
//         else
//         {
//             return r;
//         }
// }


// int main() 
// {
//    string s="{[()]}";
//    if(pvalid(s))
//    {
//        cout<<"valid";
//    }
//    else 
//    {
//        cout<<"invalid";
//    }
   
// }
// Online C++ compiler to run C++ program online
//=======================================fibo(recursion)==============================================
#include <iostream>
using namespace std;
int fibo(int n){
    if(n==0 || n==1)
    {
       return n; 
    }
    return fibo(n-1)+fibo(n-2);
}
int main() {
   int n;
   cout<<"enter term\n";
   cin>>n;
   cout<<fibo;
}
// Online C++ compiler to run C++ program online
///=========================table(recursion)============================

#include <iostream>
using namespace std;
void table(int n,int i=1 ){
   if(i>10){
       return ;
   }
   cout<<n*i<<"\t";
   table(n,i+1);
}
int main() {
   int n;
   cout<<"enter number\n";
   cin>>n;
   table(n);
  
 
}

// Online C++ compiler to run C++ program online
//===============================basic=======================
#include <iostream>
using namespace std;
void show(int a){
    if(a==0){                  //base condition
        return ;
    }
    show(a-1);                    //recursion relationship
    cout<<a<<"\t";
}
int main() {
   show(6);                         //output===1 2 3 4 5 6
}
// Online C++ compiler to run C++ program online
//===============================factorial with recursion=======================
#include <iostream>
using namespace std;
int fac(int n){
    if(n==1)
    {
        return n;
    }
    return n*fac(n-1);
}
int main() {
   cout<<fac(5);
}

// Online C++ compiler to run C++ program online
//===============================sum with recursion=======================
#include <iostream>
using namespace std;
int sum(int n){
    if(n==0)
    {
        return n;
    }
    return n+sum(n-1);
}
int main() {
   cout<<sum(5);
}

// Online C++ compiler to run C++ program online
//====================================factorial other method recursion=================================
#include <iostream>
using namespace std;
int fact (int a){
    int r;
    if(a==0){
        return 1;
    }
    r=a*fact(a-1);
    return r;
}
int main() {
    cout<<fact(5);
}

