#include<iostream>
using namespace std;
void pattern7(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<=n-i-1; j++){
            cout<<" ";
        }
        for(int q=1; q<=2*i-1; q++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    pattern7(n);
}