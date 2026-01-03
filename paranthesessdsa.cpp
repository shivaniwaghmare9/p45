

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
//=========================================paranthesess=================================================================================================
#include <iostream>
using namespace std;
int valid(string s)
{
    if(s.size()<=4)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main() 
{
    string s;
    cout<<"enter name\n";
    cin>>s;
    bool j=valid(s);
    if(j){
        cout<<"valid";
    }
    else{
        cout<<"invalid";
    }
}
// Online C++ compiler to run C++ program online
//====================================================PARANTHESESS=================================================================================================================================================================================================
#include <iostream>
using namespace std;
#include<stack>
bool pvalid(string s)
{
    stack<char>stk;
    bool r=true;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='{' || s[i]=='(' || s[i]=='[')
        {
            stk.push(s[i]);
        }
        else if(s[i]=='}')
        {
            if(!stk.empty()&& stk.top()=='{')
            {
                stk.pop();
            }
            else
            {
                r=false;
                break;
            }
        }
            
            else if(s[i]==')')
        {
            if(!stk.empty()&& stk.top()=='(')
            {
                stk.pop();
            }
            else
            {
                r=false;
                break;
            }
        }
            else if(s[i]==']')
        {
            if(!stk.empty()&& stk.top()=='[')
            {
                stk.pop();
            }
            else
            {
                r=false;
                break;
            }
        }
    }
        if(!stk.empty())
        {
            return false;
        }
        else
        {
            return r;
        }
}


int main() 
{
   string s="{[()]}";
   if(pvalid(s))
   {
       cout<<"valid";
   }
   else 
   {
       cout<<"invalid";
   }
   
}