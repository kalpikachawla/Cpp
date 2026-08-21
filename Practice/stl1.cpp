#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr(5);
    cout<<"Enter all the elements :\n";
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
    int largest = arr[0];
    for(int i=0; i<arr.size(); i++){
        if(largest<arr[i]){
            largest = arr[i];
        }
    }
    cout<<"Largest element :\n"<<largest;
}