#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter r :";
    cin>>r;
    cout<<"Enter c :";
    cin>>c;
    int arr[r][c];
    cout<<"Enter all the elements :\n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    int counteven = 0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j]%2==0) counteven++;
        }
    }
    cout<<"Total number of even numbers are :\n"<<counteven;
}