#include<iostream>
#include<string>
using namespace std;
int main(){
    string n;
    cout<<"Enter string in lowercase :";
    cin>>n;
    int countvowel = 0;
    int countconso = 0;
    for(int i=0; i<n.length(); i++){
        if(n[i]=='a'|| n[i]=='e' || n[i]=='i' || n[i]=='o'|| n[i]=='u'){
            countvowel++;
        }
        else{
            countconso++;
        }
    }
    cout<<"Total number of vowels : "<<countvowel<<endl;
    cout<<"Total number of consonents : "<<countconso;
}