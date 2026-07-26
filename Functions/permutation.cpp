#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=2; i<=x; i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n,r;
    cout<<"Enter n :";
    cin>>n;
    cout<<"Enter r :";
    cin>>r;
    int a = factorial(n);
    int b = factorial(n-r);
    cout<<a/b;
}
