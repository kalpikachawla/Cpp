#include<iostream>
using namespace std;
int freq(string s,char target){
    int count=0;
    for(int i=0; i<s.length(); i++){
        if(target==s[i]){
            count++;
        }
    }
    return count;
}
int main(){
    string s;
    cout<<"Enter a string in lowercase :";
    cin>>s;
    char target;
    cout<<"Enter a target : ";
    cin>>target;
    cout<<target<<" occurs "<<freq(s,target)<<" times.";

}