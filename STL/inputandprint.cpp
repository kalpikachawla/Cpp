#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the number of elements :\n";
    cin>>n;
    cout<<"Enter all elements :\n";
    for(int i=0; i<v.size(); i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"The elements of vector is :\n";
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }

}