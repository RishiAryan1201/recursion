#include <iostream>
using namespace std;
int i=0;

int answer(int x){
    if(x==0) return 1;
    if(x<=9) return 0;
    if((x%10)==0){
        return 1+answer(x/10);
    }
    else answer(x/10);
}

int main(){
    int a;
    cout<<"enter number ";
    cin>>a;
    cout<<answer(a);
    return 0;
}