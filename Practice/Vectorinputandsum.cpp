#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n=5;
    cout<<"Enter all the elements :\n";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=v[i];
    }
    cout<<"The sum of elements is : "<<sum;
}