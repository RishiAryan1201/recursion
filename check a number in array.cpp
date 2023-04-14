#include <iostream>
using namespace std;
bool check(int a[], int size, int num){
    if(size==1 || a[0]!=num){
        return false;
    }
    if(!check(a+1,size-1,num)){
        return false;
    }
    else true;
}
int main(){
    int a[10000], n, num;
    cout<<"size of array you want";
    cin>>n;
    cout<<"enter your array";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"number to be checked";
    cin>>num;
    cout<<check(a, n, num);
    return 0;
}