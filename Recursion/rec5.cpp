#include<iostream>
using namespace std;
int countd(int count,int n){
    if(n==0) return count;
    return countd(count+1,n/10);
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    cout<<countd(0,n);
}