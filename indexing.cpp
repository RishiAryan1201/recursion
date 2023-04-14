#include <iostream>
using namespace std;

int i=0;
bool check(int a[], int size, int num){
    if(a[0]==num){
        return true;
    }
    else if(check(a+1,size-1,num)){
        i++;
        return true;
    }
    else return false;
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
    if(check(a, n, num) == true){
        cout<<i;
    }
    else {
        cout<<-1;
    }
    return 0;
}