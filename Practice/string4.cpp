#include<iostream>
using namespace std;
int main(){
    string n;
    cout<<"Enter a string :";
    cin>>n;
    string temp="";
    for(int i=n.length()-1; i>=0; i--){
        temp+=n[i];
    }
     if(n==temp){
            cout<<"It is a palindrome";
        }
        else {
            cout<<"It is not a palindrome";
        }
    
}