

// Online C++ compiler to run C++ program online
//=====================================MAP================================================================================================================
#include <iostream>
using namespace std;
#include <map>
int main()
{
    map<int ,string>mp{{109,"ruhi"},{12,"pihu"},{102,"joy"}};
    for(auto p:mp)
    {
        cout<<p.first<<","<<p.second<<"\n";
    }
    cout<<"Size="<<mp.size()<<"\n";
    for(auto p=mp.begin(); p!=mp.end();p++)
    {
        cout<<p->first<<","<<p->second<<"\n";
    }
    
}