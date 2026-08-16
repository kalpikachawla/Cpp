#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}
int main(){
    int n;
    cout<<"Enter size :";
    cin>>n;
    int arr[n];
    cout<<"Enter all the elements :\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    cout<<"Reversed array :\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}