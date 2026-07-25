#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter cost price :";
    cin>>cp;
    cout<<"Enter selling price :";
    cin>>sp;
    if(sp>cp){
        cout<<"The seller made a profit.\n";
        cout<<sp-cp;
    }
    else if(sp<cp){
      cout<<"The seller made a loss.\n";
      cout<<sp-cp;
    }
    else{
        cout<<"No profit No loss";
    }
    
        
    }
