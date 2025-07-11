

// // Online C++ compiler to run C++ program online
// //=================================ADDITION OF TWO VECTORS dynamic===============================================================================================
// #include <iostream>
// using namespace std;
// #include<vector>
// int main() {
//   int n;
//   cout << "Enter the size of vectors: ";
//   cin >> n;

//   vector<int> v1(n);
//   vector<int> v2(n);
//   vector<int> sum(n);

 
//   for (int i = 0; i < n; i++) {
//    cout << "Enter elements of vector v1: ";
//     cin >> v1[i];
//   }

//   for (int i = 0; i < n; i++) {
//     cout << "Enter elements of vector v2: ";
//     cin >> v2[i];
//   }

//   for (int i = 0; i < n; i++) {
//     sum[i] = v1[i] + v2[i];
//   }

//   cout << "Addition of v1 and v2: ";
//   for (int i = 0; i < n; i++) {
//     cout << sum[i] << " ";
//   }
//   cout<<endl;

  
// }


//  //========================STATICALLY ADDITION=======================================================
//  #include <iostream>
// using namespace std;
// #include<vector>
// int main() {
//     vector<int>v1{1,2,3};
//     vector<int>v2{2,5,6};
//     vector<int>sum(v1.size());
    
//     for(int i=0; i<v1.size();i++){
//         sum[i]=v1[i]+v2[i];
//     }
//     cout<<"\naddition\n";
//     for(int i=0; i<v1.size();i++){
//         cout<<sum[i]<<"\t";
//     }
// }

// //=================================ADDITION OF TWO VECTORS DIFFRENT SIZE===============================================================================================
// #include <iostream>
// using namespace std;
// #include<vector>
// int main() {
    
//     int n1,n2;
//     cout<<"enter the size of vector 1:";
//     cin>>n1;
//     cout<<"enter the size of vector 2:";
//     cin>>n2;
    
//     vector<int>v1(n1);
//     vector<int>v2(n2);
//     vector<int>sum(max(n1,n2));
    
//     for(int i=0; i<n1; i++){
//         cout<<"enter the value of v1:";
//         cin>>v1[i];
//     }
//     for(int i=0; i<n2; i++){
//         cout<<"enter the value of v2:";
//         cin>>v2[i];
//     }
    
//     for(int i=0; i<sum.size(); i++){
//        if(i<v1.size()){
//            sum[i]+=v1[i];
//        }
//        if(i<v2.size()){
//            sum[i]+=v2[i];
//        }
//     }
    
//     cout<<"\n After addition\n";
//     for(int i=0; i<sum.size(); i++){
//        cout<<sum[i]<<"\t";
//     }
// }
// // Online C++ compiler to run C++ program online
// //============================================additon of two vectors(dynamic) addition of last se===========================================addition of two vectors=====================================
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
// int n1,n2;
// cout<<"size of vector 1:";
// cin>>n1;
// cout<<"size of vector 2:";
// cin>>n2;
 
//  vector<int>v1(n1);
//  vector<int>v2(n2);

//  int sumv1=0;
//  int sumv2=0;
 
//  for(int i=0; i<n1; i++){
//     cout<<"element of v1:";
//     cin>>v1[i];
// }
// for(int i=0; i<n2; i++){
//     cout<<"element of v2:";
//     cin>>v2[i];
// }

// for(int i=0; i<v1.size();i++){
//     sumv1=sumv1*10+v1[i];
// }
// for(int i=0; i<v2.size();i++){
//     sumv2=sumv2*10+v2[i];
// }
// cout<<"\nAddition\n";
// cout<<sumv1+sumv2<<"\t";

// }
// // Online C++ compiler to run C++ program online
// //===================================addition of two vectors(static) addition of last se=====================================
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//  vector<int>v1{5,4,3,2,9};
//  vector<int>v2{7,8,6,5,9,8,7};

//  int sumv1=0;
//  int sumv2=0;
 
// for(int i=0; i<v1.size();i++){
//     sumv1=sumv1*10+v1[i];
// }
// for(int i=0; i<v2.size();i++){
//     sumv2=sumv2*10+v2[i];
// }
// cout<<"\nAddition\n";
// cout<<sumv1+sumv2<<"\t";

// }
// //=====================sum of v1 and sum of v2 add the print of highest value =========================================================
// #include <iostream>
// using namespace std;
// #include<vector>
// int main() {
//     int n1,n2;
//     cout<<"enter the size of of vector 1:";
//     cin>>n1;
//     cout<<"enter the size of of vector 2:";
//     cin>>n2;
    
//     vector<int>v1(n1);
//     vector<int>v2(n2);
    
//     for(int i=0; i<n1; i++){
//         cout<<"enter the value of v1:";
//         cin>>v1[i];
//     }
//     for(int i=0; i<n2; i++){
//         cout<<"enter the value of v2:";
//         cin>>v2[i];
//     }
    
//     int sumv1=0;
//     int sumv2=0;
    
//     for(int i=0; i<n1; i++){
//        sumv1+=v1[i];
//     }
//     cout<<"sum of v1:"<<sumv1<<"\n";
    
//     for(int i=0; i<n2; i++){
//        sumv2+=v2[i];
//     }
//      cout<<"sum of v2:"<<sumv2<<"\n";
    
//     if(sumv1>sumv2){
//         cout<<"\n maximum value of v1:"<<sumv1<<"\n";
//     }
//     else if(sumv2>sumv1){
//         cout<<"\n maximum value of v2:"<<sumv2<<"\n";
//     }
//     else{
//         cout<<"\nboth vector equal:"<<"\n";
//     }
// }



// // Online C++ compiler to run C++ program online
// //=================================ADDITION OF TWO VECTORS DIFFRENT SIZE===============================================================================================
// #include <iostream>
// using namespace std;
// #include<vector>
// int main() {
//     //=====================sum of v1 and sum of v2 add the print of highest value =========================================================
//     int n1,n2;
//     cout<<"enter the size of of vector 1:";
//     cin>>n1;
//     cout<<"enter the size of of vector 2:";
//     cin>>n2;
    
//     vector<int>v1(n1);
//     vector<int>v2(n2);
    
//     for(int i=0; i<n1; i++){
//         cout<<"enter the value of v1:";
//         cin>>v1[i];
//     }
//     for(int i=0; i<n2; i++){
//         cout<<"enter the value of v2:";
//         cin>>v2[i];
//     }
    
//     int sumv1=0;
//     int sumv2=0;
    
//     for(int i=0; i<n1; i++){
//        sumv1+=v1[i];
//     }
//     cout<<"sum of v1:"<<sumv1<<"\n";
    
//     for(int i=0; i<n2; i++){
//        sumv2+=v2[i];
//     }
//      cout<<"sum of v2:"<<sumv2<<"\n";
    
//     if(sumv1>sumv2){
//         cout<<"\n maximum value of v1:"<<sumv1<<"\n";
//     }
//     else if(sumv2>sumv1){
//         cout<<"\n maximum value of v2:"<<sumv2<<"\n";
//     }
//     else{
//         cout<<"\nboth vector equal:"<<"\n";
//     }
// }
//     // Online C++ compiler to run C++ program online
// //===================================unique value duplicate ek hi bar print ho=====================================================================================================
// #include <iostream>
// #include <vector>
// #include<algorithm>
// using namespace std;

// int main() 
// {
//    vector<int>v{2,5,1,5,2,6,3,4,1};
//    sort(v.begin(),v.end());
//    int x=1;
//    for(int i=1; i<v.size();i++)
//    {
//        if(v[x-1]!=v[i])
//        {
//            v[x]=v[i];
//            x++;
//        }
//    }
//    for(int i=0; i<x; i++){
//        cout<<v[i]<<"\t";
//    }
// }
    
//     //======================ADDITION OF TWO VECTORS DIFFRENT SIZE==========
//     // int n1,n2;
//     // cout<<"enter the size of vector 1:";
//     // cin>>n1;
//     // cout<<"enter the size of vector 2:";
//     // cin>>n2;
    
//     // vector<int>v1(n1);
//     // vector<int>v2(n2);
//     // vector<int>sum(max(n1,n2));
    
//     // for(int i=0; i<n1; i++){
//     //     cout<<"enter the value of v1:";
//     //     cin>>v1[i];
//     // }
//     // for(int i=0; i<n2; i++){
//     //     cout<<"enter the value of v2:";
//     //     cin>>v2[i];
//     // }
    
//     // for(int i=0; i<sum.size(); i++){
//     //   if(i<v1.size()){
//     //       sum[i]+=v1[i];
//     //   }
//     //   if(i<v2.size()){
//     //       sum[i]+=v2[i];
//     //   }
//     // }
    
//     // cout<<"\n After addition\n";
//     // for(int i=0; i<sum.size(); i++){
//     //   cout<<sum[i]<<"\t";
//     // }
    
    
//     //========================STATICALLY ADDITION=======================================================
//     // vector<int>v1{1,2,3};
//     // vector<int>v2{2,5,6};
//     // vector<int>sum(v1.size());
    
//     // for(int i=0; i<v1.size();i++){
//     //     sum[i]=v1[i]+v2[i];
//     // }
//     // cout<<"\naddition\n";
//     // for(int i=0; i<v1.size();i++){
//     //     cout<<sum[i]<<"\t";
//     // }
    
//    //=========================DYNAMACLLY ADDITION================================================================== 
//      // int n;
//     // cout<<"enter the size of vectors:";
//     // cin>>n;
    
//     // vector<int>v1(n);
//     // vector<int>v2(n);
//     // vector<int>sum(n);
    
//     // for(int i=0; i<n; i++){
//     //     cout<<"enter the element of v1:";
//     //     cin>>v1[i];
//     // }
    
//     //  for(int i=0; i<n; i++){
//     //     cout<<"enter the element of v2:";
//     //     cin>>v2[i];
//     // }
    
//     //  for(int i=0; i<n; i++){
//     //     sum[i]=v1[i]+v2[i];
//     // }
//     // cout<<"\nAddition of vectors\n";
//     //  for(int i=0; i<n; i++){
//     //     cout<<sum[i]<<"\t";
//     // }

// //=================================================================
// //   int n;
// //   cout << "Enter the size of vectors: ";
// //   cin >> n;

// //   vector<int> v1(n);
// //   vector<int> v2(n);
// //   vector<int> sum(n);

 
// //   for (int i = 0; i < n; i++) {
// //   cout << "Enter elements of vector v1: ";
// //     cin >> v1[i];
// //   }

// //   for (int i = 0; i < n; i++) {
// //     cout << "Enter elements of vector v2: ";
// //     cin >> v2[i];
// //   }

// //   for (int i = 0; i < n; i++) {
// //     sum[i] = v1[i] + v2[i];
// //   }

// //   cout << "Addition of v1 and v2: ";
// //   for (int i = 0; i < n; i++) {
// //     cout << sum[i] << " ";
// //   }
// //   cout<<endl;

  
// //}



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
// Online C++ compiler to run C++ program online
//============================================additon of two vectors(dynamic) addition of last se===========================================addition of two vectors=====================================
#include <iostream>
#include <vector>
using namespace std;
int main() {
int n1,n2;
cout<<"size of vector 1:";
cin>>n1;
cout<<"size of vector 2:";
cin>>n2;
 
 vector<int>v1(n1);
 vector<int>v2(n2);

 int sumv1=0;
 int sumv2=0;
 
 for(int i=0; i<n1; i++){
    cout<<"element of v1:";
    cin>>v1[i];
}
for(int i=0; i<n2; i++){
    cout<<"element of v2:";
    cin>>v2[i];
}

for(int i=0; i<v1.size();i++){
    sumv1=sumv1*10+v1[i];
}
for(int i=0; i<v2.size();i++){
    sumv2=sumv2*10+v2[i];
}
cout<<"\nAddition\n";
cout<<sumv1+sumv2<<"\t";

}
// Online C++ compiler to run C++ program online
//===================================addition of two vectors(static) addition of last se=====================================
#include <iostream>
#include <vector>
using namespace std;
int main(){
 vector<int>v1{5,4,3,2,9};
 vector<int>v2{7,8,6,5,9,8,7};

 int sumv1=0;
 int sumv2=0;
 
for(int i=0; i<v1.size();i++){
    sumv1=sumv1*10+v1[i];
}
for(int i=0; i<v2.size();i++){
    sumv2=sumv2*10+v2[i];
}
cout<<"\nAddition\n";
cout<<sumv1+sumv2<<"\t";

}
//=====================sum of v1 and sum of v2 add the print of highest value =========================================================
#include <iostream>
using namespace std;
#include<vector>
int main() {
    int n1,n2;
    cout<<"enter the size of of vector 1:";
    cin>>n1;
    cout<<"enter the size of of vector 2:";
    cin>>n2;
    
    vector<int>v1(n1);
    vector<int>v2(n2);
    
    for(int i=0; i<n1; i++){
        cout<<"enter the value of v1:";
        cin>>v1[i];
    }
    for(int i=0; i<n2; i++){
        cout<<"enter the value of v2:";
        cin>>v2[i];
    }
    
    int sumv1=0;
    int sumv2=0;
    
    for(int i=0; i<n1; i++){
       sumv1+=v1[i];
    }
    cout<<"sum of v1:"<<sumv1<<"\n";
    
    for(int i=0; i<n2; i++){
       sumv2+=v2[i];
    }
     cout<<"sum of v2:"<<sumv2<<"\n";
    
    if(sumv1>sumv2){
        cout<<"\n maximum value of v1:"<<sumv1<<"\n";
    }
    else if(sumv2>sumv1){
        cout<<"\n maximum value of v2:"<<sumv2<<"\n";
    }
    else{
        cout<<"\nboth vector equal:"<<"\n";
    }
}



// Online C++ compiler to run C++ program online
//=================================ADDITION OF TWO VECTORS DIFFRENT SIZE===============================================================================================
#include <iostream>
using namespace std;
#include<vector>
int main() {
    //=====================sum of v1 and sum of v2 add the print of highest value =========================================================
    int n1,n2;
    cout<<"enter the size of of vector 1:";
    cin>>n1;
    cout<<"enter the size of of vector 2:";
    cin>>n2;
    
    vector<int>v1(n1);
    vector<int>v2(n2);
    
    for(int i=0; i<n1; i++){
        cout<<"enter the value of v1:";
        cin>>v1[i];
    }
    for(int i=0; i<n2; i++){
        cout<<"enter the value of v2:";
        cin>>v2[i];
    }
    
    int sumv1=0;
    int sumv2=0;
    
    for(int i=0; i<n1; i++){
       sumv1+=v1[i];
    }
    cout<<"sum of v1:"<<sumv1<<"\n";
    
    for(int i=0; i<n2; i++){
       sumv2+=v2[i];
    }
     cout<<"sum of v2:"<<sumv2<<"\n";
    
    if(sumv1>sumv2){
        cout<<"\n maximum value of v1:"<<sumv1<<"\n";
    }
    else if(sumv2>sumv1){
        cout<<"\n maximum value of v2:"<<sumv2<<"\n";
    }
    else{
        cout<<"\nboth vector equal:"<<"\n";
    }
}
    // Online C++ compiler to run C++ program online
//===================================unique value duplicate ek hi bar print ho=====================================================================================================
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() 
{
   vector<int>v{2,5,1,5,2,6,3,4,1};
   sort(v.begin(),v.end());
   int x=1;
   for(int i=1; i<v.size();i++)
   {
       if(v[x-1]!=v[i])
       {
           v[x]=v[i];
           x++;
       }
   }
   for(int i=0; i<x; i++){
       cout<<v[i]<<"\t";
   }
}
    
    //======================ADDITION OF TWO VECTORS DIFFRENT SIZE==========
    // int n1,n2;
    // cout<<"enter the size of vector 1:";
    // cin>>n1;
    // cout<<"enter the size of vector 2:";
    // cin>>n2;
    
    // vector<int>v1(n1);
    // vector<int>v2(n2);
    // vector<int>sum(max(n1,n2));
    
    // for(int i=0; i<n1; i++){
    //     cout<<"enter the value of v1:";
    //     cin>>v1[i];
    // }
    // for(int i=0; i<n2; i++){
    //     cout<<"enter the value of v2:";
    //     cin>>v2[i];
    // }
    
    // for(int i=0; i<sum.size(); i++){
    //   if(i<v1.size()){
    //       sum[i]+=v1[i];
    //   }
    //   if(i<v2.size()){
    //       sum[i]+=v2[i];
    //   }
    // }
    
    // cout<<"\n After addition\n";
    // for(int i=0; i<sum.size(); i++){
    //   cout<<sum[i]<<"\t";
    // }
    
    
    //========================STATICALLY ADDITION=======================================================
    // vector<int>v1{1,2,3};
    // vector<int>v2{2,5,6};
    // vector<int>sum(v1.size());
    
    // for(int i=0; i<v1.size();i++){
    //     sum[i]=v1[i]+v2[i];
    // }
    // cout<<"\naddition\n";
    // for(int i=0; i<v1.size();i++){
    //     cout<<sum[i]<<"\t";
    // }
    
   //=========================DYNAMACLLY ADDITION================================================================== 
     // int n;
    // cout<<"enter the size of vectors:";
    // cin>>n;
    
    // vector<int>v1(n);
    // vector<int>v2(n);
    // vector<int>sum(n);
    
    // for(int i=0; i<n; i++){
    //     cout<<"enter the element of v1:";
    //     cin>>v1[i];
    // }
    
    //  for(int i=0; i<n; i++){
    //     cout<<"enter the element of v2:";
    //     cin>>v2[i];
    // }
    
    //  for(int i=0; i<n; i++){
    //     sum[i]=v1[i]+v2[i];
    // }
    // cout<<"\nAddition of vectors\n";
    //  for(int i=0; i<n; i++){
    //     cout<<sum[i]<<"\t";
    // }

//=================================================================
//   int n;
//   cout << "Enter the size of vectors: ";
//   cin >> n;

//   vector<int> v1(n);
//   vector<int> v2(n);
//   vector<int> sum(n);

 
//   for (int i = 0; i < n; i++) {
//   cout << "Enter elements of vector v1: ";
//     cin >> v1[i];
//   }

//   for (int i = 0; i < n; i++) {
//     cout << "Enter elements of vector v2: ";
//     cin >> v2[i];
//   }

//   for (int i = 0; i < n; i++) {
//     sum[i] = v1[i] + v2[i];
//   }

//   cout << "Addition of v1 and v2: ";
//   for (int i = 0; i < n; i++) {
//     cout << sum[i] << " ";
//   }
//   cout<<endl;

  
//}



