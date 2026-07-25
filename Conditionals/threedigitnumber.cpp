#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter x :";
    cin>>x;
    if(x>99 && x<1000){
        cout<<"It is a three digit number";
    } 
    else{
        cout<<"It is not a three digit number";
    }
}