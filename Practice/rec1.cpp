#include<iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    int a= n%10;
    return sum(n/10)+a;
    
}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<"Sum of digits is : "<<sum(n);
}