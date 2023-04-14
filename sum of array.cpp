#include <iostream>
using namespace std;
int sum(int a[], int size){
    if (size==2){
        return a[0]+a[1];
    }
    if(size<=1) return 0;
    return a[0] + sum(a+1,size-1);
}
int main(){
    int a[10000], n;
    cout<<"size of array you want";
    cin>>n;
    cout<<"enter your array";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<sum(a,n);
    return 0;
}