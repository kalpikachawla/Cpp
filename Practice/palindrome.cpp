#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int temp = n;
    int rev = 0;
    while(n>0){
        int ld = n%10;
        rev = rev*10 + ld;
        n=n/10;
    }
    if(temp==rev){
        cout<<"It is a palindrome"<<endl;
    }
    else {
        cout<<"It is not a palindrome";
    }
}