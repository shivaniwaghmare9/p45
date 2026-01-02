
// // Online C++ compiler to run C++ program online
// //===================================class array templateg============================
// #include <iostream>
// #include <array>
// using namespace std;
// int main() {
//     array<int,5>v{3,5,6,4,2};
    
//     for(int i=0; i<v.size(); i++){
//         cout<<v.at(i)<<"\t";
//     }
   
// }



// // Online C++ compiler to run C++ program online
// //===================================for funtion and auto inluding============================
// #include <iostream>
// #include <array>
// using namespace std;
// int main() {
//     array<int,5>v{3,5,6,4,2};
//     array<double,3>v2{23.5,34.6,56.7};
//     for(int i=0; i<v.size(); i++){
//         cout<<v.at(i)<<"\t";
//     }
//     for(auto p:v2){
//         cout<<p<<"\t";
//     }
// }

// //===================================use of for function================================================
// // Online C++ compiler to run C++ program online
// //===================================for funtion and auto inluding
// #include <iostream>
// #include <array>
// using namespace std;
// int main() {
//     array<int,5>v{3,5,6,4,2};
//     array<double,3>v2{23.5,34.6,56.7};
//     // for(int i=0; i<v.size(); i++){
//     //     cout<<v.at(i)<<"\t";
//     // }
//     for(auto p:v2){                  //v2
//         cout<<p<<"\t";
//     }
//     cout<<"\n";
//     for(auto n:v){
//         cout<<n<<"\t";               //v
//     }
// }

// // Online C++ compiler to run C++ program online
// //===================================front(first) back(last)value=================
// #include <iostream>
// #include <array>
// using namespace std;
// int main() {
//     array<int,5>v{3,5,6,4,2};
//     array<double,3>v2{23.5,34.6,56.7};
//     //====================front(first)value====================
//     cout<<"front of v="<<v.front()<<"\n";
//     cout<<"front of v2="<<v2.front()<<"\n";
//     //===========================back(last)value===================
//     cout<<"back of v="<<v.back()<<"\n";
//     cout<<"back of v2="<<v2.back()<<"\n";
    
// }


// // Online C++ compiler to run C++ program online
// //==================================sort use of(asending order)=================
// #include <iostream>
// #include <array>
// using namespace std;
// #include <algorithm>
// int main() {
//     array<int,5>v{3,5,6,4,2};
//     array<double,3>v2{23.5,68.6,56.7};
//     sort(v.begin(),v.end());
//     for(auto p:v){
//         cout<<p<<"\t";
//     }
//     cout<<"\n";
//      sort(v2.begin(),v2.end());
//     for(auto n:v2){
//         cout<<n<<"\t";
//     }
    
    
// }
// // Online C++ compiler to run C++ program online
// //==================================second highestr)=================
// #include <iostream>
// #include <array>
// using namespace std;
// #include <algorithm>
// int main() {
//     array<int,5>v{3,5,6,4,2};
//     array<double,3>v2{23.5,68.6,56.7};
//     sort(v.begin(),v.end());
   
//     for(auto p:v){
//         cout<<p<<"\t";
//     }
//      cout<<"\n second highest of v\n";
//     cout<<v[3];
//     cout<<"\n";
//      sort(v2.begin(),v2.end());
//     for(auto n:v2){
//         cout<<n<<"\t";
//     }
    
// }

// // Online C++ compiler to run C++ program online
// //==================================third highestr)=================
// #include <iostream>
// #include <array>
// using namespace std;
// #include <algorithm>
// int main() {
//     array<int,5>v{3,5,6,4,2};
//     array<double,3>v2{23.5,68.6,56.7};
//     sort(v.begin(),v.end());
   
//     for(auto p:v){
//         cout<<p<<"\t";
//     }
//      cout<<"\n third highest of v\n";
//     cout<<v[2];
//     cout<<"\n";
//      sort(v2.begin(),v2.end());
//     for(auto n:v2){
//         cout<<n<<"\t";
//     }    
// }

// //=========================================================swaping of two arrays===============================
// #include <iostream>
// using namespace std;
// #include <array>
// //#include <algorithm>
// int main() {
//  array<int,5>arr1{56,78,34,23};
//   array<int,5>arr2{25,73,22,21,45};
//   arr1.swap(arr2);
//  // swap(arr1,arr2);
//   for(auto p1:arr1){
//       cout<<p1<<"\t";
//   }
//   cout<<"\n arr2\n";
//    for(auto p2:arr2){
//       cout<<p2<<"\t";
//   }
 
// }



// Online C++ compiler to run C++ program online
//===================================class array templateg============================
#include <iostream>
#include <array>
using namespace std;
int main() {
    array<int,5>v{3,5,6,4,2};
    
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<"\t";
    }
   
}



// Online C++ compiler to run C++ program online
//===================================for funtion and auto inluding============================
#include <iostream>
#include <array>
using namespace std;
int main() {
    array<int,5>v{3,5,6,4,2};
    array<double,3>v2{23.5,34.6,56.7};
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<"\t";
    }
    for(auto p:v2){
        cout<<p<<"\t";
    }
}

//===================================use of for function================================================
// Online C++ compiler to run C++ program online
//===================================for funtion and auto inluding
#include <iostream>
#include <array>
using namespace std;
int main() {
    array<int,5>v{3,5,6,4,2};
    array<double,3>v2{23.5,34.6,56.7};
    // for(int i=0; i<v.size(); i++){
    //     cout<<v.at(i)<<"\t";
    // }
    for(auto p:v2){                  //v2
        cout<<p<<"\t";
    }
    cout<<"\n";
    for(auto n:v){
        cout<<n<<"\t";               //v
    }
}

// Online C++ compiler to run C++ program online
//===================================front(first) back(last)value=================
#include <iostream>
#include <array>
using namespace std;
int main() {
    array<int,5>v{3,5,6,4,2};
    array<double,3>v2{23.5,34.6,56.7};
    //====================front(first)value====================
    cout<<"front of v="<<v.front()<<"\n";
    cout<<"front of v2="<<v2.front()<<"\n";
    //===========================back(last)value===================
    cout<<"back of v="<<v.back()<<"\n";
    cout<<"back of v2="<<v2.back()<<"\n";
    
}


// Online C++ compiler to run C++ program online
//==================================sort use of(asending order)=================
#include <iostream>
#include <array>
using namespace std;
#include <algorithm>
int main() {
    array<int,5>v{3,5,6,4,2};
    array<double,3>v2{23.5,68.6,56.7};
    sort(v.begin(),v.end());
    for(auto p:v){
        cout<<p<<"\t";
    }
    cout<<"\n";
     sort(v2.begin(),v2.end());
    for(auto n:v2){
        cout<<n<<"\t";
    }
    
    
}
// Online C++ compiler to run C++ program online
//==================================second highestr)=================
#include <iostream>
#include <array>
using namespace std;
#include <algorithm>
int main() {
    array<int,5>v{3,5,6,4,2};
    array<double,3>v2{23.5,68.6,56.7};
    sort(v.begin(),v.end());
   
    for(auto p:v){
        cout<<p<<"\t";
    }
     cout<<"\n second highest of v\n";
    cout<<v[3];
    cout<<"\n";
     sort(v2.begin(),v2.end());
    for(auto n:v2){
        cout<<n<<"\t";
    }
    
}

// Online C++ compiler to run C++ program online
//==================================third highestr)=================
#include <iostream>
#include <array>
using namespace std;
#include <algorithm>
int main() {
    array<int,5>v{3,5,6,4,2};
    array<double,3>v2{23.5,68.6,56.7};
    sort(v.begin(),v.end());
   
    for(auto p:v){
        cout<<p<<"\t";
    }
     cout<<"\n third highest of v\n";
    cout<<v[2];
    cout<<"\n";
     sort(v2.begin(),v2.end());
    for(auto n:v2){
        cout<<n<<"\t";
    }    
}

//=========================================================swaping of two arrays===============================
#include <iostream>
using namespace std;
#include <array>
//#include <algorithm>
int main() {
 array<int,5>arr1{56,78,34,23};
  array<int,5>arr2{25,73,22,21,45};
  arr1.swap(arr2);
 // swap(arr1,arr2);
  for(auto p1:arr1){
      cout<<p1<<"\t";
  }
  cout<<"\n arr2\n";
   for(auto p2:arr2){
      cout<<p2<<"\t";
  }
 
}


