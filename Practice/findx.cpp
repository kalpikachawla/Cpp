#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter n :";
    cin>>n;
    cout<<"Enter the elements of the array :\n";
    for(int i=0; i<n; i++){
        int y;
        cin>>y; 
        v.push_back(y);
    }
    int x;
    cout<<"Enter the element to be searched :"<<endl;
    cin>>x;
    bool found = false;
    for(int i=0; i<n; i++){
        if(x==v[i]){
            cout<<"The index is : "<<i<<endl;
           found = true;
           break;
        }
         }
    if(found == false){
        cout<<"Element not found";
    }
}