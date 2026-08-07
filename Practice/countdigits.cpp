#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int count=0;
    while(n>0){
        count++;
        n=n/10;
        
    }
    cout<<"Total number of digits is : "<<count;
    
}