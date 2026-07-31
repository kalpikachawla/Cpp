#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(8);
    q.push(7);
    q.push(6);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front();
    priority_queue<int>p;
    p.push(8);
    p.push(7);
    p.push(9);
    cout<<" "<<p.top();
}