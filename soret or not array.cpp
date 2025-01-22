#include <iostream>
#include<array>
using namespace std;

int Issorted(int a[],int size){
    if(size==0 || size==1)
       return true;
    if(a[0]>a[1])
       return false;
    return Issorted(a+1,size-1);
}

int main()
{
    int a[100];
    cout<<"Enter the Number of elements"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    cout<<"Insert the -->"<<i<<" Number in Array -->"<<endl;
    cin>>a[i];
    }
   if(Issorted(a,n))
   cout<<"Sorted";
   else
   cout<<"Not Sorted";

    return 0;
}