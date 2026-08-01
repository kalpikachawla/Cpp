#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of terms :\n";
    cin>>n;
   int first = 0, second = 1, next;
    for(int i=1; i<=n; i++){
        cout<<first<<" ";
        next = first + second;
       first = second;
       second = next;

    }
}