#include<iostream>
using namespace std;
int factorial(int a){
    int fact=1;
    for(int i=2; i<=a; i++){
       fact*=i;
    }
    return fact;

}
int main(){
    int n,r;
    cout<<"Enter n :";
    cin>>n;
    cout<<"Enter r :";
    cin>>r;
    int a=factorial(n);
    int b=factorial(r);
    int c= factorial(n-r);
    cout<<a/(b*c);
   
}