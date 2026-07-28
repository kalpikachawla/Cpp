#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl;
    s[3]='i';
    cout<<s[0]<<endl;
    cout<<s;
}