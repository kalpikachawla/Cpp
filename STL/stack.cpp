#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(9);
    st.push(3);
    st.push(5);
    st.push(7);
    st.push(5);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty();
}