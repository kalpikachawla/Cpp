#include<iostream>
using namespace std;
bool isSorted(int arr[], int n){
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int arr[n];
    cout<<"Enter all the elements :";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(isSorted(arr,n)){
        cout<<"Array is sorted.";
    }
    else{
        cout<<"Array is not sorted.";
    }
}