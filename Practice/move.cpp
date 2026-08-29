#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,0,0,8};
    int n = 5;
    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}