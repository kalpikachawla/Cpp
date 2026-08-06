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
    int min=arr[0];
    for(int i=0; i<=n; i++){
        if(arr[i]<min) min=arr[i];
    }
    cout<<endl;
    cout<<"The minimum element is : "<<min;
}