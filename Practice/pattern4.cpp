#include<iostream>
using namespace std;
void pattern4(int n){
    for(int i=n; i>0; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    pattern4(n);
}