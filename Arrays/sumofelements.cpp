#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter all the elements of array :"<<endl;
    for(int i=0; i<=4; i++){
        cin>>arr[i];
    }
    cout<<endl;
    int sum=0;
    for(int i=0; i<=4; i++){
        sum+=arr[i];
    }
    cout<<sum;
}