#include<iostream>
#include<climits>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter rows :";
    cin>>r;
    cout<<"Enter columns :";
    cin>>c;
    int arr[r][c];
    cout<<"Enter elements :\n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
}
    int min = INT_MAX;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j]<min) min=arr[i][j];
        }
    }
    cout<<"Minimum element :"<< min;

}