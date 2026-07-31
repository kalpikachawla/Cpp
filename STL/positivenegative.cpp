#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter n :";
    cin>>n;
    cout<<"Enter all the elements :\n";
    for(int i=0; i<n; i++){
        int x; 
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
    int pcount=0;
    int ncount=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]>0) pcount++;
        else{
            ncount++;
        }
    }
    cout<<"Total number of positive elements are : "<<pcount<<endl;
    cout<<"Total number of negative elements are : "<<ncount<<endl;
}