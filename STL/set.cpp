#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main(){
    //set
    set<int>s;
    s.insert(1);
    s.emplace(7);
    s.emplace(8);
    s.emplace(7);
    for(auto x : s){
        cout<<x<<" ";
    }
    cout<<endl;
    // multiset
    multiset<int>ms;
    ms.insert(8);
    ms.emplace(8);
    ms.emplace(8);
    for(auto i:ms){
        cout<<i<<" ";
    }
    ms.erase(8);
    // unordered set
    unordered_set<int>us;
    us.insert(8);
    us.insert(8);
    us.insert(10);
    us.emplace(9);
    us.emplace(7);
    for(auto y:us){
        cout<<y<<" ";
    }

}