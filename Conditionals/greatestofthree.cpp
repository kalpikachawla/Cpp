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
    if(x>y && x>z){
        cout<<"x is the greatest.";
    }
    else if(y>x && y>z){
        cout<<"y is the greatest";
    }
    else{
        cout<<"z is the greatest";
    }
    
}