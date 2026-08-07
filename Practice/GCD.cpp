#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a :";
    cin>>a;
     cout<<"Enter b :";
    cin>>b;
    int c = min(a,b);
    int GCD = 0;
    for(int i=1; i<=c; i++){
        if(a%i==0 && b%i==0){
            GCD = i;
        }
    }
    cout<<GCD;
}