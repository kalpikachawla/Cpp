#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int arr[n];
    cout<<"Enter all the elements :\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter x :";
    cin>>x;
    int count=0;
    for(int i=0; i<n; i++){
        if(x==arr[i]) count++;
           }
          
    cout<<"Occurences : "<<count;
}