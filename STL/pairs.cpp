#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int , int>p={1,5};// to store two variables
    cout<<p.first<<" "<<p.second;
    // to store three variables we use nested pair
    pair<int ,pair<int ,int>>a = {1,{6,7}};
    cout<<" "<<a.first<<" "<<a.second.first<<" "<<a.second.second;
    // to store array in pair
    pair<int ,int>arr[]={{1,8},{6,7},{9,8}};
    cout<<" "<<arr[2].second;
}