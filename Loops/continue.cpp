#include<iostream>
using namespace std;
int main(){
    int n=20;
    for(int i=1; i<=n; i++){
        if(i==3 || i==8) continue;
        cout<<i<<" ";
    }
}