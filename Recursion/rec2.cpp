#include<iostream>
using namespace std;
int fact(int product,int n){
    if(n==0) return product;
    return fact(product*n, n-1);
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    cout<<fact(1,n);
}