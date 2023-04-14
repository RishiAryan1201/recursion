#include <iostream>
#include <cmath>
using namespace std;

float geometricmean(int x){
    if(x==0) return 1;
    return (1/pow(2,x)) + geometricmean(x-1); 
}

int main(){
    float a, b, c;
    cout<<"enter number of terms till you want other than 1 "<<endl;
    cin>>a;
    cout<<geometricmean(a);
    return 0; 
}