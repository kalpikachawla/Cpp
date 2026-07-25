#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int sum = 0;
    int i=1;
    while(n!=0){
     int ld=n%10;
     if(n%2==0){
        sum+=ld;
     }
        n=n/10;
         }
    cout<<sum;
}