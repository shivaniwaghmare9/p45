

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
// Online C++ compiler to run C++ program online
//=====================================MAP================================================================================================================
#include <iostream>
using namespace std;
#include <map>
int main()
{
    map<int ,string>mp;
    mp.insert({102,"pihu"});
    mp.insert({10,"hny"});
    mp.insert({101,"neha"});
   mp.insert({11,"gyani"}); 
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

// Online C++ compiler to run C++ program online
//====================================MAP(INPUT BY USER)=======================================================================================================
#include <iostream>
using namespace std;
#include <map>
int main() {
    map<int,string>mp;
    int roll,n;
    string name;
    cout<<"\nenter how many records\n";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"\nenter roll no:";
        cin>>roll;
        cout<<"\nenter name:";
        cin>>name;
        mp.insert({roll,name});
        //mp.insert(make_pair(roll,name));
    }
   cout<<"\nrecords are\n";
   for(auto p:mp){
       cout<<p.first<<":"<<p.second<<"\n";
   }
}
// Online C++ compiler to run C++ program online
//====================================MAP(INPUT BY USER )=======================================================================================================
#include <iostream>
using namespace std;
#include <map>
int main() {
    map<int,string>mp;
    int roll,n;
    string name;
    cout<<"\nenter how many records\n";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"\nenter roll no";
        cin>>roll;
        cout<<"\nenter name";
        cin>>name;
        mp.insert({roll,name});
        //mp.insert(make_pair(roll,name));
    }
   cout<<"\nrecodds are\n";
   for(auto p:mp){
       cout<<p.first<<":"<<p.second<<"\n";
   }
   //find() function or searching function
   cout<<"\n enter roll no searching\n";
   cin>>roll;
   auto k=mp.find(roll);     //search or find
   if(k!=mp.end()){
       cout<<k->first<<":"<<k->second<<"\n";
       
   }
   else{
       cout<<"not found";
   }
   
   
}

// Online C++ compiler to run C++ program online
//====================================MAP(INPUT BY USER )(sorted data mtlb sequnce me data)=======================================================================================================
#include <iostream>
using namespace std;
#include <map>
int main() {
    map<int,string>mp;
    int roll,n;
    string name;
    cout<<"\nenter how many records\n";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"\nenter roll no:";
        cin>>roll;
        cout<<"\nenter name:";
        cin>>name;
        mp.insert({roll,name});
        //mp.insert(make_pair(roll,name));
    }
   cout<<"\nrecodds are\n";
   for(auto p:mp){
       cout<<p.first<<":"<<p.second<<"\n";
   }
   //find() function or searching function
   cout<<"\n enter roll no searching\n";
   cin>>roll;
   auto k=mp.find(roll);     //search or find
   if(k!=mp.end()){
       cout<<k->first<<":"<<k->second<<"\n";
       
   }
   else{
       cout<<"not found";
   }
   //delete  
   cout<<"\n enter roll no delete\n";
   cin>>roll;
   auto j=mp.find(roll);     //delete or erase
   if(j!=mp.end()){
       mp.erase(roll);
       
   }
   else{
       cout<<"not found";
   }
   cout<<"\n";
   for(auto p:mp){
       cout<<p.first<<":"<<p.second<<"\n";
   }
   
   
}
// Online C++ compiler to run C++ program online
//====================================UNORDERDED_MAP(INPUT BY USER )(unsordet data aata h)=======================================================================================================
#include <iostream>
using namespace std;
#include <unordered_map>
int main() {
    unordered_map<int,string>up;
    int roll,n;
    string name;
    cout<<"\nenter how many records\n";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"\nenter roll no:";
        cin>>roll;
        cout<<"\nenter name:";
        cin>>name;
        up.insert({roll,name});
        //mp.insert(make_pair(roll,name));
    }
   cout<<"\nrecords are\n";
   for(auto p:up){
       cout<<p.first<<":"<<p.second<<"\n";
   }
   //find() function or searching function
   cout<<"\n enter roll no searching\n";
   cin>>roll;
   auto k=up.find(roll);     //search or find
   if(k!=up.end()){
       cout<<k->first<<":"<<k->second<<"\n";
       
   }
   else{
       cout<<"not found";
   }
   //delete  
   cout<<"\n enter roll no delete\n";
   cin>>roll;
   auto j=up.find(roll);     //delete or erase
   if(j!=up.end()){
       up.erase(roll);
       
   }
   else{
       cout<<"not found";
   }
   cout<<"\n";
   for(auto p:up){
       cout<<p.first<<":"<<p.second<<"\n";
   }
   
   
}

// Online C++ compiler to run C++ program online
//====================================UNORDERDED_MAP(ROMAN )=======================================================================================================
#include <iostream>
using namespace std;
#include <unordered_map>
int romantoint(string s){
    unordered_map<char,int>up{{'I',1},{'V',5},{'X',10}};
    int r=0; 
    for(int i=0; i<s.size(); i++)
    {
        if(up[s[i]<up[s[i+1]]])
        {
            r=r-up[s[i]];
        }
        else
        {
            r=r+up[s[i]];
        }
    }
    return r;
}

int main() {
      string s="XI";
      cout<< romantoint(s);
}

// Online C++ compiler to run C++ program online
//==============================(=multimap)========================================================================================
#include <iostream>
using namespace std;
#include <map>
int main() {
    
    multimap<int,string>multi;
    multi.insert({101,"sunny"});
    multi.insert({90,"ravi"});
    multi.insert({101,"honey"});
    multi.insert({901,"ruhi"});
    for(auto p:multi)
    {
        cout<<p.first<<","<<p.second<<"\n";
    }
    auto it=multi.find(101);
    if(it!=multi.end())
    {
        multi.erase(it);
        //multi.erase(101);
    }
    else
    {
      cout<<"not found";
    }
    cout<<"\n";
    for(auto p:multi)
    {
        cout<<p.first<<","<<p.second<<"\n";
    }
}