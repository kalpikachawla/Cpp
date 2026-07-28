#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter rows :";
    cin>>r;
    cout<<"Enter columns :";
    cin>>c;
    int arr[r][c];
    cout<<"Enter all the elements of array :\n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"Original matrix is :\n";
     for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
         }
         cout<<endl;
    }
    cout<<endl;
    cout<<"Transpose matrix is :\n";
    for(int j=0; j<c; j++){
        for(int i=0; i<r; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}