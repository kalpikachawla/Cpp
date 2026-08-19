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
    int even=0;
    int odd=0;
    for(int i=0; i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"Even numbers : "<<even<<endl;
    cout<<"Odd numbers : "<<odd;
}