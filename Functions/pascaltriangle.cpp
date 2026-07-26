#include<iostream>
using namespace std;
int factorial(int a){
    int fact = 1;
    for(int i=2; i<=a; i++){
        fact*=i;
    }
    return fact;
}
int ncr(int n,int r){
    int a=factorial(n);
    int b=factorial(r);
    int c=factorial(n-r);
    return a/(b*c);
}
int main(){
    int n,r;
    cout<<"Enter n :";
    cin>>n;
    cout<<"Enter r :";
    cin>>r;
    ncr(n,r);
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}