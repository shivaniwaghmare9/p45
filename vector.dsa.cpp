

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

// Online C++ compiler to run C++ program online
//==============================================================static program of vector================================
#include <iostream>
using namespace std;
#include <vector>
int main() {
 vector<int>v(5,10);
 v[0]=90;
  v[2]=89;
   v[4]=100;
   cout<<"size="<<v.size()<<"\n";
   for(auto p:v){
       cout<<p<<"\t";
   }
}

// Online C++ compiler to run C++ program online
//==========================================dynamic program of vector==========================
#include <iostream>
using namespace std;
#include <vector>
int main() {
vector<int>v;
int n,b;
cout<<"how many elements\n";
cin>>n;
for(int i=1; i<=n; i++){
    cout<<"enter value\n";
    cin>>b;
    v.push_back(b);
}
for(auto p:v){
    cout<<p<<"\t";
}
}

// Online C++ compiler to run C++ program online
//==========================================dynamic program of vector==========================
#include <iostream>
using namespace std;
#include <vector>
int main() {
vector<int>v;
int n,b;
cout<<"How many elements\n";
cin>>n;
for(int i=1; i<=n; i++){
    cout<<"Enter value\n";
    cin>>b;
    v.push_back(b);               //Add the element last
}
for(auto p:v){
    cout<<p<<"\t";
}
v.pop_back();                     //pop_back last se data delete
cout<<"\nAfter deletion\n";
for(auto p:v){
    cout<<p<<"\t";
}
}   

// Online C++ compiler to run C++ program online
//==========================================dynamic program of vector(insert function)with iterator=============================================================
#include <iostream>
using namespace std;
#include <vector>
#include <iterator>
int main() {
    vector<int>v;   
    int n ,b;
    cout<<"How many element"<<"\n";
    cin>>n;
   cout<<"size of v="<<v.size()<<"\n"; 
   for(int i=1; i<=n; i++){
       cout<<"enter the number"<<"\n";
       cin>>b;
       v.push_back(b);
   }
    for(auto p:v){
        cout<<p<<"\t";             
    }  
    
    // v.pop_back();
    // cout<<"\nAfter deletion\n";
    // for(auto p:v){
    //     cout<<p<<"\t";             
    // }   
    vector<int>::iterator it=v.begin();//starts se value add
    v.insert(it+1,300);
    v.insert(it+3,400);
    cout<<"\n Insert at begin\n";
    for(auto p:v){
        cout<<p<<"\t";
    }
    
    //ydi last se value insert karvana h to(end()) ka use
     vector<int>::iterator itt=v.end();
     v.insert(itt-1,30);  //second last position pr insert
    v.insert(itt-2,41);  
    cout<<"\n Insert at end\n";
    for(auto p:v){
        cout<<p<<"\t";
    }
     
}

// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
   
    vector<int>v;
    v.push_back(2);
    v.push_back(20);
    v.push_back(1);
    v.push_back(39);
    v.push_back(14);
    
    for(auto p:v){
        cout<<"p value="<<p<<"\n";
    }
    
    vector<int>::iterator it = v.begin();
    v.insert(it,32);
    
    for(auto p2:v){
        cout<<p2<<"\t";
    }
    
    v.pop_back();
    
    cout<<"\n";
    
    for(auto p:v){
        cout<<p<<"\t";
    }
    
    v.erase(it+2);
    cout<<"\n";
    
    for(auto p:v){
        cout<<p<<"\t";
    }

    
    
}
    
    

// Online C++ compiler to run C++ program online
//=====================================erase(value(data) based delete)=======================================================
// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
   
    vector<int>v;
    v.push_back(2);
    v.push_back(20);
    v.push_back(1);
    v.push_back(39);
    v.push_back(14);
    
    for(auto p:v){
        cout<<"p value="<<p<<"\n";
    }
    
    vector<int>::iterator it = v.begin();
    v.insert(it,32);
    
    for(auto p2:v){
        cout<<p2<<"\t";
    }
    
    v.pop_back();
    
    cout<<"\n";
    
    for(auto p:v){
        cout<<p<<"\t";
    }
    
    v.erase(it+2);
    cout<<"\n";
    
    for(auto p:v){
        cout<<p<<"\t";
    }

    
    
    int x;
    cout<<"enter the value for search";
    cin>>x;
    auto j=find(v.begin(),v.end(),x);
    cout<<*j; //or ye value ke according hota h delete
    
    v.erase(j); // address ke according hm delete kr sakte h
    cout<<"\n";
    
    for(auto p:v){
        cout<<p<<"\t";
    }
    
}   

// Online C++ compiler to run C++ program online
//=====================================erase and(revesre)=============================================================
// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
   
    vector<int>v;
    v.push_back(2);
    v.push_back(20);
    v.push_back(1);
    v.push_back(39);
    v.push_back(14);
    
    for(auto p:v){
        cout<<"p value="<<p<<"\n";
    }
    
    vector<int>::iterator it = v.begin();
    v.insert(it,32);
    
    for(auto p2:v){
        cout<<p2<<"\t";
    }
    
    v.pop_back();
    
    cout<<"\n";
    
    for(auto p:v){
        cout<<p<<"\t";
    }
    
    v.erase(it+2);
    cout<<"\n";
    
    for(auto p:v){
        cout<<p<<"\t";
    }
    cout<<"\n";

    
    
    // int x;
    // cout<<"enter the value for search";
    // cin>>x;
    // auto j=find(v.begin(),v.end(),x);
    // cout<<*j; //or ye value ke according hota h delete
    
    // v.erase(j); // address ke according hm delete kr sakte h
    // cout<<"\n";
    
    // for(auto p:v){
    //     cout<<p<<"\t";
    // }
    
    
    reverse(v.begin(), v.end());
    for(auto p:v){
        cout<<p<<"\t";
        
    }
}

// Online C++ compiler to run C++ program onlin
//==========================================================================max-min value
#include <iostream>
#include <vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
   
    vector<int>v;
    v.push_back(2);
    v.push_back(20);
    v.push_back(1);
    v.push_back(39);
    v.push_back(14);
    
    for(auto p:v){
        cout<<"p value="<<p<<"\n";
    }
    
    vector<int>::iterator it = v.begin();
    v.insert(it,32);
    
    for(auto p2:v){
        cout<<p2<<"\t";
    }
    
    v.pop_back();
    
    cout<<"\n";
    
    for(auto p:v){
        cout<<p<<"\t";
    }
    
    v.erase(it+2);
    cout<<"\n";
    
    for(auto p:v){
        cout<<p<<"\t";
    }
    cout<<"\n";

    
    
    // int x;
    // cout<<"enter the value for search";
    // cin>>x;
    // auto j=find(v.begin(),v.end(),x);
    // cout<<*j; //or ye value ke according hota h delete
    
    // v.erase(j); // address ke according hm delete kr sakte h
    // cout<<"\n";
    
    // for(auto p:v){
    //     cout<<p<<"\t";
    // }
    
    
    // reverse(v.begin(), v.end());
    // for(auto p:v){
    //     cout<<p<<"\t";
        
    // }
    
    cout<<"min value:"<<*min_element(v.begin(),v.end())<<endl;
    cout<<"max value:"<<*max_element(v.begin(),v.end())<<endl;
    
    
    if(v.empty()){
        cout<<"vector is mt";
    }else{
        cout<<"vector is not mt";
    }
    
    v.clear();
    if(v.empty()){
        
    }
}