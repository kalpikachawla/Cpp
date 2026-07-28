#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter rows :";
    cin>>n;
    cout<<"Enter columns :";
    cin>>m;
    int arr[n][m];
    cout<<"Enter all the elements :\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Actual matrix :\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){  
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int brr[m][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            brr[j][i] = arr[i][j];
        }
    }
    cout<<endl;
      cout<<"Transposed matrix :\n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}