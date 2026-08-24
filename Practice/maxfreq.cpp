#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    int arr[26]={0};
    for(int i=0; i<s.length(); i++){
        arr[s[i]-'a']++;
    }
    int maxi=-1;
    char ans=-1;
    for(int i=0; i<s.length(); i++){
            if(maxi<arr[s[i]-'a']){
                maxi = arr[s[i]-'a'];
                ans=s[i];
            }
    }
    cout<<ans;
}