#include <iostream>

using namespace std;


void reverseofarray(int arr[], int r, int l){
    if(l=r) return;
    swap(arr[l],arr[r]);
    reverseofarray(arr, r-1, l+1);
}

int main(){
    int n,l=0, r, arr[100];
    cin>>n;
    r=n-1;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reverseofarray(arr, r, l);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}