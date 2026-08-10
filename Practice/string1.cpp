#include<iostream>
#include<string>
using namespace std;
int main(){
    string n;
    cout<<"Enter string in lowercase :";
    cin>>n;
    int count = 0;
    for(int i=0; i<n.length(); i++){
        if(n[i]=='a'|| n[i]=='e' || n[i]=='i' || n[i]=='o'|| n[i]=='u'){
            count++;
        }
    }
    cout<<"Total number of vowels : "<<count;
}
