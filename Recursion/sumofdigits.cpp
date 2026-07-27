#include<iostream>
using namespace std;
int sum(int a){
    if(a==0) return 0;
    return a%10 +sum(a/10);
}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<sum(n);
}