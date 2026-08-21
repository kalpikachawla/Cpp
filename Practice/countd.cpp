#include<iostream>
using namespace std;
int countt(int n){
    int count = 0;
    if(n==0) return count;
    return 1 + countt(n/10);
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    cout<<countt(n);
}