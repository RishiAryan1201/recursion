#include<iostream>
using namespace std;

// {long long pow(int x, int n){
    // if(n==0) return 1;
    //int partialans = pow(x, n-1);
    //return x*partialans;
//}
long long pow(int x, int n){
    if(n==0) return 1;
    int temp = pow(x, n/2);

    if(n%2!=0) return temp*temp*x;
    return temp*temp;
}
int main(){
    int x, n;
    cin>>x>>n;
    cout<<pow(x, n);
    return 0;	
}