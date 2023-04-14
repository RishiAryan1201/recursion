#include <iostream>
using namespace std;

int sum(int n){
    if(n==1) return 1;
    int partialsum = sum(n-1);
    return n+partialsum;
}

int main(){
    int n = 0;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;	
}