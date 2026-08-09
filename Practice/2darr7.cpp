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
    for(int j=0; j<c; j++){
        int sum = 0;
        for(int i=0; i<r; i++){
            sum+=arr[i][j];
        }
        cout<<"Column sum "<<j+1<<" = "<<sum<<endl;
    }
}