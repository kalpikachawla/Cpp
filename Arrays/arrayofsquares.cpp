#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        arr[i] =(i+1)*(i+1);
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}