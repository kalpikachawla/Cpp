#include<iostream>
using namespace std;
int summ(int n){
    if(n==0) return n;
    return n%10 + summ(n/10);
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    cout<<summ(n);
}