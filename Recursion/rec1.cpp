#include<iostream>
using namespace std;
int add(int sum,int n){
    if(n==0) return sum;
    return add(sum +n, n-1);
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    cout<<"Sum = "<<add(0,n);
}