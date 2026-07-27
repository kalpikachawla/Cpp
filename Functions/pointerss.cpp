#include<iostream>
using namespace std;
int main(){
    int x=9;
    int* p=&x;
    x=90;
    cout<<x<<endl;
    cout<<&p<<endl;
    cout<<*p;
}