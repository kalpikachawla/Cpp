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
    int x;
    cout<<"Enter a digit :";
    cin>>x;
    for(int i=0; i<n; i++){
        if(x==arr[i]) {
            cout<<"Element found at index "<<i<<endl;
              break;
        }
    }
    
}