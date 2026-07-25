#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    char op;
    cin>>op;
    int y;
    cin>>y;
    switch(op){
        case '+':
        cout<<x+y<<endl;
        break;
        case '-':
        cout<<x-y<<endl;
         break;
        case '*':
        cout<<x*y<<endl;
         break;
        case '/':      
        cout<<x/y<<endl;
         break;
        default :
        cout<<"Invalid operator";
    }
    
}