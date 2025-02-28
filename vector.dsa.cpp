

// Online C++ compiler to run C++ program online//===
//===================================VECTOR=======================================================================
#include <iostream>
using namespace std;
#include <vector>
int main() {
   vector<int>v;                //isme size nhii dala h to output 0
   cout<<v.size()<<"\n";
   
   vector<int>v2{4,2,3,5,1};
   cout<<"size of v2="<<v2.size()<<"\n";  //size 5 dala output 5

   v2[2]=50;//index 2 se 50 ki swaping index2 mtlb 3 ke place par 50 aa jayega
   for(auto p:v2){
       cout<<p<<"\t";
   }
   cout<<"\n";
   
   cout<<"capacity is v2="<<v2.capacity()<<"\n";   //output 5
  // yha size or capicity same hi h 
  
  v2.push_back(67);  //push_back use k use se size doguna ho jata h to capacity size ki duoble ho jati h
  for(auto p:v2){
      cout<<p<<"\t";
  }
  cout<<"\n";
   cout<<"capacity is v2="<<v2.capacity()<<"\n";// output 10 size ka doguna ab jb tk capicity ko push_back se bhar nhii dete mtlb 10 size pure feel nhi ho jate capicity 10 hi rhegi
    v2.push_back(78);  
    v2.push_back(55);  
     cout<<"size of v2="<<v2.size()<<"\n";
     for(auto p:v2){
      cout<<p<<"\t";
  }
  cout<<"\n";
   cout<<"capacity is v2="<<v2.capacity()<<"\n";
   
   v2.push_back(71); 
    v2.push_back(46);
    v2.push_back(48);
     cout<<"size of v2="<<v2.size()<<"\n"; 
    for(auto p:v2){
      cout<<p<<"\t";
  }
  cout<<"\n";
   cout<<"capacity is v2="<<v2.capacity()<<"\n";
   
   
   
}

// Online C++ compiler to run C++ program online//===
//===================================VECTOR=======================================================================
#include <iostream>
using namespace std;
#include <vector>
int main() {
   vector<int>v;                //isme size nhii dala h to output 0
   cout<<v.size()<<"\n";
   
   vector<int>v2{4,2,3,5,1};
   cout<<"size of v2="<<v2.size()<<"\n";  //size 5 dala output 5

   v2[2]=50;//index 2 se 50 ki swaping index2 mtlb 3 ke place par 50 aa jayega
   for(auto p:v2){
       cout<<p<<"\t";
   }
   cout<<"\n";
   
   cout<<"capacity is v2="<<v2.capacity()<<"\n";   //output 5
  // yha size or capicity same hi h 
  //=================puch_back(last me element add krta h)==========================
  v2.push_back(67);  //push_back use k use se size doguna ho jata h to capacity size ki duoble ho jati h
  for(auto p:v2){
      cout<<p<<"\t";
  }
  cout<<"\n";
   cout<<"capacity is v2="<<v2.capacity()<<"\n";// output 10 size ka doguna ab jb tk capicity ko push_back se bhar nhii dete mtlb 10 size pure feel nhi ho jate capicity 10 hi rhegi
    v2.push_back(78);  
    v2.push_back(55);  
     cout<<"size of v2="<<v2.size()<<"\n";
     for(auto p:v2){
      cout<<p<<"\t";
  }
  cout<<"\n";
   cout<<"capacity is v2="<<v2.capacity()<<"\n";
   
   v2.push_back(71); 
    v2.push_back(46);
    v2.push_back(48);
     cout<<"size of v2="<<v2.size()<<"\n"; 
    for(auto p:v2){
      cout<<p<<"\t";
  }
  cout<<"\n";
   cout<<"capacity is v2="<<v2.capacity()<<"\n";
 //===========================pop_back(last se elemnt remove krta h)==================== 
   v2.pop_back();
   for(auto p:v2){
      cout<<p<<"\t";
  }
   
   
   
}