#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n=5;
    cout<<"Enter all the elements :\n";
    for(int i=0; i<5; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int l=v[0];
    int s=v[0];
    cout<<endl;
    for(int i=0; i<v.size(); i++){
        if(l<v[i]) l=v[i];
        if(s>v[i]) s=v[i];
    }
    cout<<"Largest element : "<<l<<endl;
    cout<<"Smallest element : "<<s;
}