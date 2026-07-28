#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n[5];
    cout<<"Enter all the elements of array :\n";
    for(int i=0; i<=4; i++){
        cin>>n[i];
    }
    int mx=n[0];
    for(int i=0; i<=4; i++){
        if(mx<n[i]){
            mx=n[i];
        }
    }
    cout<<endl;
    cout<<mx;
}