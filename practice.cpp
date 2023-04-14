#include <iostream>
using namespace std;
int ans(int a[], int n){
    if(n==0){
        return a[0];
    }
    int j = a[0]^a[1];
    return j^ans(a+1, n-1);
}

int main(){
    int a[1000], n;
    cin>>n;
    for (int i=0;i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[j]<a[i]){
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    cout<<ans(a,n);
    return 0; 
}