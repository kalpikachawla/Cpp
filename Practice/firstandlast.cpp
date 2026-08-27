#include<iostream>
using namespace std;
int first(int arr[], int n, int t){
    int s = 0;
    int e = n-1;
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]==t){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid]>t){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return ans;
}
int last(int arr[], int n, int t){
    int s = 0;
    int e = n-1;
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]==t){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid]>t){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int arr[n];
    cout<<"Enter a sorted array :\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int t;
    cout<<"Enter a target value :";
    cin>>t;
    cout<<"First occurence : "<<first(arr,n,t)<<endl;
    cout<<"Last occurence : "<<last(arr,n,t)<<endl;
}