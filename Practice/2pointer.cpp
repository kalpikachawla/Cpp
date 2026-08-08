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
    cout<<"Enter target :";
    cin>>x;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]+arr[j]==x){
             cout<<i<<" ";
            }
           }
    }
}