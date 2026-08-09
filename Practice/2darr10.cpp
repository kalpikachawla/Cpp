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
    cout<<endl;
    cout<<"Matrix :\n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int max = arr[0][0];
    int maxr=0, maxc=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(max<arr[i][j]){
            max = arr[i][j];
            maxr=i+1;
            maxc=j+1;
            }
        }
    }
    cout<<"Maximum element : "<<max<<endl;
    cout<<"Row : "<<maxr<<endl;
    cout<<"Column : "<<maxc<<endl;
}