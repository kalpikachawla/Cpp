#include<iostream>
using namespace std;
void swapper(int &x, int &y){
    x=x+y;
    y=x-y;
    x=x-y;
}

int main(){
    int a,b;
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter b :";
    cin>>b;
    swapper(a,b);
    cout<<"Inside main value of a :"<<a<<endl;
     cout<<"Inside main value of b :"<<b<<endl;
    
}