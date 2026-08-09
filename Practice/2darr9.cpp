#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter r :";
    cin>>r;
    cout<<"Enter c :";
    cin>>c;
    int arr[r][c];
    cout<<"Enter all the elements of the array :\n";
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
    int x;
    cout<<"Enter x :";
    cin>>x;
    bool found = false;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j]==x)
            cout<<"Row : "<<i+1<<endl<<"Column : "<<j+1<<endl;
            found = true;
         }
    }
    if(!found){
        cout<<"No element found";
    }
        
    }