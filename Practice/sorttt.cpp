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
    for(int i=0; i<n; i++){
        int minindex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minindex]){
                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]);
    }
    cout<<"Your sorted array is :\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}