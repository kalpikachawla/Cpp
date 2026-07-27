#include<iostream>
using namespace std;
int  reverse(int n){
    if(n==0) return 0;
    cout<<n<<endl;
    reverse(n-1);
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    reverse(n);
}