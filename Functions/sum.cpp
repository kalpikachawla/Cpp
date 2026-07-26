#include<iostream>
using namespace std;
int sum(int x,int y){
    int ans = x+y;
    return ans;
}
int main(){
    int a,b;
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter b :";
    cin>>b;
    cout<<sum(a,b);
    
}