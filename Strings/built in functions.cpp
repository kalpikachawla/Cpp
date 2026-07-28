#include<iostream>
using namespace std;
int main(){
    //pushback
    string s="Kalpika";
    cout<<s<<endl;
    s.push_back('i');
    cout<<s<<endl;
    //popback
    s.pop_back();
    cout<<s<<endl;
    //append
    s.append(" Chawla");
    cout<<s<<endl;
}
