

//===========================nameless function (lambda function or expression)================================================================================================

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v{6,23,58,48,7,21};
    sort(v.begin(),v.end(),less<int>()); //asending 
     sort(v.begin(),v.end(),greater<int>()); //desending 
      sort(v.begin(),v.end(),[](int a,int b){return a<b;});//a>b to desending me(a<b)to asending me
    for(auto p:v){
        cout<<p<<"\t";
    }
    cout<<"\n";
    cout<<[](int a){return a+15;}(6)<<"\n";
    cout<<[](int a,int b){return a<b;}(3,5)<<"\n";//a>b to false(0)ora<bto true(1)
    auto k=[](int a){return a*a;};
    cout<<k(6);  //6 ka square 36 output
}