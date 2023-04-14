#include <iostream>
using namespace std;

int calculation(int x, int y){
    if (y==1)
    {
        return x;
    }
    int ans = calculation(x, y-1);
    return x+ans;
}

int main(){
    int a, b;
    cout<<"enter first number ";
    cin>>a;
    cout<<"enter second number ";
    cin>>b;
    cout<<calculation(a,b);
    return 0;
}