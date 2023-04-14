#include <iostream>
#include <cmath>
using namespace std;

int answer(int x){
    if(x==0) return 0;
    int smallanswer= x%10;
    return smallanswer + answer(x/10);
}
int main(){
    int a;
    cin>>a;
    cout<<answer(a);
    return 0; 
}