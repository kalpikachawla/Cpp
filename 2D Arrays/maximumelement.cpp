#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter rows :";
    cin>>r;
    cout<<"Enter columns :";
    cin>>c;
    int arr[r][c];
    int max = INT16_MIN;
    cout<<"Enter all the elements of array :\n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j]>max) max = arr[i][j];
        }
        
    }
    cout<<"Maximum element :\n";
    cout<<max;
}