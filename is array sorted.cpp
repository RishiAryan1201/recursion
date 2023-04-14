#include <iostream>
using namespace std;

bool is_sorted(int a[], int size){
    if(size==0 || size==1) return true;
    if(a[0]>a[1]){
        return false;
    }
    bool issmallersorted = is_sorted(a+1, size-1);
    return issmallersorted; 
}
int main(){
    int n;
    cout<<"size of array you want";
    cin>>n;
    cout<<"enter your array";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    is_sorted(a, n);
    return 0; 
}