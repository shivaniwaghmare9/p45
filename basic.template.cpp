// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void sum (int a, int b)
{
   cout<<a+b;
}
void sum(double a,double b)
{
    cout<<a+b;
}
int main() {
    sum(3.4,4.3);
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void sum (int a, int b)
{
   cout<<a+b;
}
void sum(float a,float b)
{
    cout<<a+b;
}
int main() {
    sum(3.4,4.3);
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void sum (int a, int b)
{
   cout<<a+b;
}
int main() {
    sum(3,4);
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void sum (int a, int b)
{
   cout<<a+b;
}
int main() {
    sum(3,4.3);
}

// Online C++ compiler to run C++ program online
//======================================template===============================
#include <iostream>
using namespace std;
template <typename t1>//content place hadder
t1 sum(t1 a,t1 b)
{
    return a+b;
}
int main()
{
   cout<<sum(2.3,2.3);                      //output=4.6
   
}
// Online C++ compiler to run C++ program online
//=====================================template============================================
#include <iostream>
using namespace std;
template <typename t1>
t1 sum(t1 a,t1 b){
    return a+b;
}
template <typename t1,typename t2>
int multi(t1 x1,t2 x2){
    return x1*x2;
}

int main() {
    cout<<sum(4,5)<<"\n";
    cout<<multi(4.3,3.4);                    //outpu-9
                                              //14
}

// Online C++ compiler to run C++ program online
//=====================================template============================================
#include <iostream>
using namespace std;
template <typename t1>
class cybrom{
    public: t1 show(t1 a){
        return ++a;
    }
};
template <typename t1,typename t2>
class bhopal{
    t1 x1;
    t2 x2;
    public:bhopal(t1 a,t2 b){
        x1=a;
        x2=b;
    }
    void show(){
        cout<<"X1="<<x1<<"\n";
        cout<<"X2="<<x2<<"\n";
    }
};

int main() {
   cybrom<char>obj;
   cout<<obj.show('a')<<"\n";
   bhopal<int,int>bp(20,30);
   bp.show();
    
}
