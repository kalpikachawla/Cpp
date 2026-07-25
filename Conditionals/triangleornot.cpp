#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter x :";
    cin>>x;
    cout<<"Enter y :";
    cin>>y;
    cout<<"Enter z :";
    cin>>z;
    if(x+y>z && y+z>x && x+z>y){
        cout<<"It is a triangle";
    }
    else{
        cout<<"It is not a triangle";
    }
}