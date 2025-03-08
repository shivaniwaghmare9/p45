

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