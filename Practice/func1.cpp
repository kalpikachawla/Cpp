#include<iostream>
using namespace std;
int sum(int n){
    int sum = 0;
    if(n==0) return 0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    cout<<sum(n);
}