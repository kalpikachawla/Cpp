#include<iostream>
using namespace std;
void binarySearch(int arr[], int n, int x){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==x){
            cout<<x<<" is present at index "<<mid<<".";
            return;
        }
        else if(arr[mid]<x){
            s = mid + 1;
        }
        else if(arr[mid]>x){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    cout<<"Element not found.";
    return;
    
}
int main(){
   int n;
   cout<<"Enter size :";
   cin>>n;
   int arr[n];
   cout<<"Enter a sorted array :\n";
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }
   int x;
   cout<<"Enter target value :";
   cin>>x;
   binarySearch(arr,n,x);
}