#include<iostream>
using namespace std;
int main(){
    int arr[5][4];
    for(int i=1; i<=4; i++){
        for(int j=1; j<=2; j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=1; i<=4; i++){
        for(int j=1; j<=2; j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum;
}