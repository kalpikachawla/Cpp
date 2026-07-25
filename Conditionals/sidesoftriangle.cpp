#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter 1st side :";
    cin>>x;
    cout<<"Enter 2nd side :";
    cin>>y;
    cout<<"Enter 3rd side :";
    cin>>z;
    if(x+y>z && y+z>x && x+z>y){
        cout<<"It is a triangle";
    }
    else{
        cout<<"It is not a triangle";
    }
}