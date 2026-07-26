#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter rows :";
    cin>>n;
    cout<<"Enter columns :";
    cin>>m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cout<<"*";
            
        }
        cout<<endl;
    }
}