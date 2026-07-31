#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5};
    for(int i=v.size()-1; i>=0; i--){// last element is size -1
        cout<<v[i]<<" ";
    }
}