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
    int max = arr[0];
    int smax = -1;
    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout<<"Largest element : "<<max<<endl;
    for(int i=0; i<n; i++){
        if(arr[i]<max && arr[i]>smax){
            smax = arr[i];
        }
}
    cout<<"Second largest : "<<smax;
}