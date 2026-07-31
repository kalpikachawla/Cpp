#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(4);
    v.emplace_back(8);
    v.push_back(7);
    v.push_back(8);
    vector<int>::iterator it = v.begin();
   for(auto it=v.begin(); it!=v.end(); it++){
    cout<<*(it)<<" ";
   }
   cout<<endl;
   for(auto it : v){
    cout<<it<<" ";
   }
   
}
