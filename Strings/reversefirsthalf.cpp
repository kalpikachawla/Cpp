#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="Kalpikaa";
    int n=s.length();
    reverse(s.begin(),s.begin()+4);
    cout<<s<<endl;
}