#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter n :";
    cin>>n;
    cout<<"Enter m :";
    cin>>m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cout<<(char)(j+96)<<" ";
        
        }
        cout<<endl;
    }
}