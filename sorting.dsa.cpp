                 //========================DSA(DATA STRUCTURE AND ALGORITHM)============================


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
 class top{
     public:void show(int arr[],int s)
    {
      //  /
         for(int i=0; i<s; i++)
        {
             if(i==s-1)
            {
                 cout<<arr[i];            
            }
             else
            {
             cout<<arr[i]<<",";
           }
        }
         
    }
 };
int main() ///driver code
{
   int a[5]={3,1,4,2,8};
   int s=sizeof(a)/sizeof(a[0]);
   top p;                                         //OUTPUT=3,1,4,2,8
   p.show(a,s);
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class top{
    public:void show(int arr[],int s)
    {
        if(s==0)
        {
            cout<<"no data";
        }
        else{
            for (int i=0; i<s; ++i)
            {
                if(i==s-1)
                {
                    cout<<arr[i];
                }
                else
                {
                    cout<<arr[i]<<",";
                }
            }
        }
    }
};
int main()  //driver code
{
    int n;
    cout<<"enter size of array either 0 or more\n";
    cin>>n;
    int a[n];
    int s=sizeof(a)/sizeof(a[0]);
    cout<<"enter"<<n<<"values\n";
    for(int i=0; i<n; ++i){
        cin>>a[i];
    }
  cout<<"s="<<s<<"\n";
  top p;
  p.show(a,s);
}
//=============================================[BUBBLE SORT]=======================================================

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class top{
    int c=0;
    bool f=true;
    public:void bubble(int arr[],int s)
    {
        for(int i=0; i<s; i++)
        {
            for (int j=0; j<s-i-1; ++j)
            {
                c++;
                if(arr[j]>arr[j+1]){
                    int tmp;
                    tmp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=tmp;
                    f=false;
                }
            }
            if(f==true){
                break;
            }
        }
        cout<<"\ncounter hit="<<c;
    }
};
int main() {
    top p;
    int a[]={5,4,3,2,1};
    int s=sizeof(a)/sizeof(a[0]);
    for(int i=0; i<s;++i){
        cout<<a[i]<<"\t";
    }
    p.bubble(a,s);
    cout<<"\n after applying \n";
    for (int i=0; i<s; ++i){
        cout<<a[i]<<"\t";
    }
 
}
//===========================[INSERTION SORT]=======================
#include<iostream>
using namespace std;
class top{
    int c=0;
    bool f=true;
    
    public:void insertsort(int arr[],int s){
        for(int i=1; i<s; i++){
             c++;
             int j=i;
    while (j>0 && arr[j]<arr[j-1]){
                    int tmp;
                   tmp= arr[j-1];
                   arr[j-1]=arr[j];
                   arr[j]=tmp;
                   j--;
                }
            }
           
        cout<<"\ncounter hit="<<c;
    }
};
int main(){
    top p;
    int a[]={5,4,3,2,1};
    int s=sizeof(a)/sizeof(a[0]);
    for(int i=1; i<s; i++){
        cout<<a[i]<<"\t";
    }
    p.insertsort(a,s);                        //output=  5	4	2	1	3	
                                              //counter hit=4               
     cout<<"\nafter applying\n";              // after applying 
    for(int i=1; i<s; i++){                   //1 2 3 4 5
        cout<<a[i]<<"\t";
    }
    
    
}

// Online C++ compiler to run C++ program online\
==================================selection sort========================
#include <iostream>
using namespace std;
int c=0;
bool t=true;
void selection(int arr[],int size){
    for(int i=0; i<size; i++)
    {
        int chhotu=i;
        for(int j=i+1; j<size; j++)
        {
            c++;
            if(arr[chhotu]>arr[j])
            {
                chhotu=j;
            }
        }
        if(chhotu!=i){
            int tmp;
            tmp=arr[i];
            arr[i]=arr[chhotu];
            arr[chhotu]=tmp;
            t=false;
            
        }
        if(t==true)
        {
            break;
        }
        
    }
    cout<<"\ncounter hit="<<c;
}


             
          
    

int main() {
  
    int arr[]={2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"\nBefore Applying\n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    selection(arr,size);
    cout<<"\nAfter Applying\n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
}


//================================NON-LINEAR================================================
//*QUIKE-SORT
//*MERGE-SORT
// Online C++ compiler to run C++ program online
////============================= QUICK SORT ALGORITHM========================================
#include <iostream>
using namespace std;
int divide(int arr[],int low,int high){
    int pv=arr[low];
    int i=low+1;
    int j=high;
    do{
        while(arr[i]<pv){
            i++;
        }
        while(arr[j]>pv){
            j--;
        }
        if(i<j){
            int tmp; 
            tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
        }
    }
    while(i<j);
             int tmp; 
            tmp=arr[low];
            arr[low]=arr[j];
            arr[j]=tmp;
            return j;
}
void qksort(int arr[],int low,int high)
{
    int pv;
    if(low<high){
        pv=divide(arr,low,high);
        qksort(arr,low,pv-1);
        qksort(arr,pv+1,high);
        
    }
}
int main() {
 int arr[]={9,2,1,5,6};
 int size=sizeof(arr)/sizeof(arr[0]);
 cout<<"\nBefore applying\n";
 for(int i=0; i<size; i++){
     cout<<arr[i]<<"\t";
 }
 qksort(arr,0,size-1);
 cout<<"\nAfter applying quik sort\n";
 for(int i=0; i<size; i++){
     cout<<arr[i]<<"\t";
 }
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void merges(int A[],int low,int mid, int high){
    int i,j,k,B[high+1];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high){
        if(A[i]<A[j]){
            B[k]=A[i];
            i++;
        }
        else{
            B[k]=A[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        B[k]=A[i];
        k++;
        i++;
    }
    while(j<=high){
        B[k]=A[j];
        k++;
        j++;
    }
    for(i=low; i<=high; i++){
        A[i]=B[i];
    }
    
}
void divide(int A[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        divide(A,low,mid);
        divide(A,mid+1,high);
        merges(A,low,mid,high);
    }
}
void printarr(int A[],int n){
    int i;
    for(i=0; i<n; i++){
        cout<<A[i]<<"\t";
    }
    cout<<"\n";
}
int main() {
    int A[]={3,5,2,13,12,10,6};
    int n=sizeof(A)/sizeof(A[0]);
    printarr(A,n);
    divide(A,0,n-1);
    cout<<"--------After mergessort----------------\n";
    printarr(A,n);
}

