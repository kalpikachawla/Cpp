#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter x :";
    cin>>x;
    if(x%5==0 && x%3==0){
        cout<<"Divisible 5 and 3.";
    }
    else{
        cout<<"Not divisible by 5 and 3.";
    }
}