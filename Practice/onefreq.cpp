#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string in lowercase : ";
    cin>>s;
    int arr[26] = {0};
    for(int i=0; i<s.length(); i++){
        arr[s[i]-'a']++;
    }
    for(int i=0; i<s.length(); i++){
      if(arr[s[i]-'a']==1){
        cout<<s[i]<<endl;
      }
    }
}