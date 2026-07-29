#include<iostream>
using namespace std;
void count(int a){
    int count=0;
   while(a>0){
    a=a/10;
    count++;
   }
   cout<<count;
    }

int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    count(n);
}