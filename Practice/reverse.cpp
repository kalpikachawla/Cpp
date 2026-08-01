#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n=5;
    cout<<"Enter the elements of vector :\n";
    for(int i=0; i<n; i++){
        int x;
        cin>>x; 
        v.push_back(x);
    }
    for(int i=4; i>=0; i--){
        cout<<v[i]<<" ";
    }
}