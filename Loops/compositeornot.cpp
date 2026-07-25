#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    // for(int i=2; i<=n/2; i++){
    //     if(n%i==0){
    //         cout<<"Composite";
    //         break;
    //     } 
    //         }
    bool flag = true;
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            flag = false;
            break;
        } 
            }
            if(n==1) cout<<"Neither prime nor composite";
   else if(flag==false) cout<<"Composite number";
    else{
        cout<<"Prime";
    }
    
}