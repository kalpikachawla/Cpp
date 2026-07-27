#include<iostream>
using namespace std;
int main(){
    int n,s;
    cout<<"Enter n :";
    cin>>n;
    cout<<"Enter s :";
    cin>>s;
    int* p=&n;
    int* q=&s;
    int temp=*p;
    *p=*q;
    *q=temp;
    cout<<"The value of n is :"<< *p<<endl;
    cout<<"The value of s is :"<< *q<<endl;
}