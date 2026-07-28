#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,3,4,5,7};
    int x;
    cout<<"Enter x :";
    cin>>x;
    int count = 0;
    for(int i=0; i<=4; i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<count;
}