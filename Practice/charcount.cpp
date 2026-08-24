#include<iostream>
using namespace std;
void countt(string s){
    int vowel=0;
    int conso=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            vowel++;
        }
        else{
            conso++;
        }
    }
    cout<<vowel<<endl;
    cout<<conso;
}
int main(){
    string s;
    cout<<"Enter a string in lowercase : ";
    cin>>s;
    countt(s);

}