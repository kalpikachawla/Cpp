#include<iostream>
using namespace std;
void multiply(int a[], int b){
    for(int i=0; i<b; i++){
        a[i]= a[i]*2;
    }

}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    multiply(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}