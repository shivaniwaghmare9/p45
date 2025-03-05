

// Online C++ compiler to run C++ program online
//=================================ADDITION OF TWO VECTORS dynamic===============================================================================================
#include <iostream>
using namespace std;
#include<vector>
int main() {
  int n;
  cout << "Enter the size of vectors: ";
  cin >> n;

  vector<int> v1(n);
  vector<int> v2(n);
  vector<int> sum(n);

 
  for (int i = 0; i < n; i++) {
   cout << "Enter elements of vector v1: ";
    cin >> v1[i];
  }

  for (int i = 0; i < n; i++) {
    cout << "Enter elements of vector v2: ";
    cin >> v2[i];
  }

  for (int i = 0; i < n; i++) {
    sum[i] = v1[i] + v2[i];
  }

  cout << "Addition of v1 and v2: ";
  for (int i = 0; i < n; i++) {
    cout << sum[i] << " ";
  }
  cout<<endl;

  
}


 //========================STATICALLY ADDITION=======================================================
 #include <iostream>
using namespace std;
#include<vector>
int main() {
    vector<int>v1{1,2,3};
    vector<int>v2{2,5,6};
    vector<int>sum(v1.size());
    
    for(int i=0; i<v1.size();i++){
        sum[i]=v1[i]+v2[i];
    }
    cout<<"\naddition\n";
    for(int i=0; i<v1.size();i++){
        cout<<sum[i]<<"\t";
    }
}

//=================================ADDITION OF TWO VECTORS DIFFRENT SIZE===============================================================================================
#include <iostream>
using namespace std;
#include<vector>
int main() {
    
    int n1,n2;
    cout<<"enter the size of vector 1:";
    cin>>n1;
    cout<<"enter the size of vector 2:";
    cin>>n2;
    
    vector<int>v1(n1);
    vector<int>v2(n2);
    vector<int>sum(max(n1,n2));
    
    for(int i=0; i<n1; i++){
        cout<<"enter the value of v1:";
        cin>>v1[i];
    }
    for(int i=0; i<n2; i++){
        cout<<"enter the value of v2:";
        cin>>v2[i];
    }
    
    for(int i=0; i<sum.size(); i++){
       if(i<v1.size()){
           sum[i]+=v1[i];
       }
       if(i<v2.size()){
           sum[i]+=v2[i];
       }
    }
    
    cout<<"\n After addition\n";
    for(int i=0; i<sum.size(); i++){
       cout<<sum[i]<<"\t";
    }
}