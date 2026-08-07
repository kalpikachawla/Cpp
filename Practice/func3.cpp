#include<iostream>
using namespace std;
int sqaure(int n){
    int ans = n*n;
    return ans;
}
int rectangle(int x, int y){
    int ans = x*y;
    return ans;
}
int main(){
    int a;
    cout<<"Enter a :";
    cin>>a;
    cout<<"The area of square is : "<<sqaure(a)<<endl;
    int b,c;
    cout<<"Enter length :";
    cin>>b;
    cout<<"Enter breadth :";
    cin>>c;
    cout<<"The area of rectangle is : "<<rectangle(b,c);
}