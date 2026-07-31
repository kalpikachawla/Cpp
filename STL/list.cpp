#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>ls;
    ls.push_back(8);
    ls.emplace_back(3);
    ls.push_front(2);
   for(auto x:ls){
    cout<<x<<" ";
   }

}