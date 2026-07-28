#include<iostream>
using namespace std;
int main(){
    int n[5];
    cout<<"Enter all the elements :"<<endl;
    for(int i=0; i<=4; i++){
        cin>>n[i];
    }
    cout<<endl;
    int product = 1;
    for(int i=0; i<=4; i++){
        product*=n[i];
    }
    cout<<product;
}