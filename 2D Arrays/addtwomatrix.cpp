#include<iostream>
using namespace std;
int main(){
    int arr[3][2];
    cout<<"Enter the elements of array :\n";
    for(int i=0; i<=2; i++){
        for(int j=0; j<=1; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    int brr[3][2];
     cout<<"Enter the elements of array :\n";
    for(int i=0; i<=2; i++){
        for(int j=0; j<=1; j++){
            cin>>brr[i][j];
        }
    }
    cout<<endl;
    int sum=0;
    for(int i=0; i<=2; i++){
        for(int j=0; j<=1; j++){
            sum+=arr[i][j] + brr[i][j];
        }
    }
    cout<<sum;

}