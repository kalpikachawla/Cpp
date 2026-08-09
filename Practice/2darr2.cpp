#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter r :";
    cin>>r;
    cout<<"Enter c :";
    cin>>c;
    int arr[r][c];
    cout<<"Enter all the elements of array :\n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    int max = -1;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(max<arr[i][j]) max = arr[i][j];
        }
    }
    cout<<"Maximum element :\n"<<max;
}