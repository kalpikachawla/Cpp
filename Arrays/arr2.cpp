#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size :";
    cin>>n;
    int arr[n];
    cout<<"Enter all the elements :\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int min = arr[0];
    int smin = 1000000;
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            smin = min;
            min = arr[i];
        }
        if(arr[i]>min && arr[i]<smin) smin = arr[i];
    }
    cout<<"Element : "<<smin;
}