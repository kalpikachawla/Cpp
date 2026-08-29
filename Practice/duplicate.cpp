#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int arr[n];
    cout<<"Enter all the elements :";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=1; i<n; i++){
         sum+=i;
    }
    cout<<"Actual sum : "<<sum<<endl;
    int arrsum = 0;
    for(int i=0; i<n; i++){
        arrsum+=arr[i];
    }
    cout<<"Array sum : "<<arrsum<<endl;
    int duplicate = arrsum-sum;
    cout<<"Duplicate number : "<<duplicate;
  
}