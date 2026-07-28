#include<iostream>
using namespace std;
int main(){
    string a;
    cout<<"Enter a string :";
    getline(cin,a);
     int b= a.length();
    int count =0;
        for(int i=0; i<b; i++){
            if(a[i]=='a'|| a[i]=='e'||a[i]=='i'
            || a[i]=='o'||a[i]=='u'){
                count++;
            }
        }
        cout<<count;
         
    }
  
