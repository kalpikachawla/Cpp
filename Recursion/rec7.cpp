#include<iostream>
using namespace std;
int occur(int count, int n, int digit){
    if(n==0) return count;
    if(n%10==digit) count++;
    return occur(count, n/10, digit);
}
int main(){
    int n, digit;
    cout<<"Enter a number :";
    cin>>n;
    cout<<"Enter a digit :";
    cin>>digit;
    cout<<digit<<" occurs "<<occur(0,n,digit)<<" times ";
}