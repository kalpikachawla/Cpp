#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int rev=0;
    int i=1;
    while(n!=0){
        int ld=n%10;
       rev=rev*10;
       rev+=ld;
       n=n/10;
 }
 cout<<rev;
}