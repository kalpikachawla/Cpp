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
    bool sorted = true;
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            sorted = false;
            break;
        }
    }
    if(sorted){
        cout<<"Sorted array";
    }
    else{
        cout<<"Not a sorted array";
    }
}