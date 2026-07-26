#include<iostream>
using namespace std;
void swap(int x, int y){
    int temp=x;
    x=y;
    y=temp;
   cout<<"The value of a is :"<<x<<endl;
   cout<<"The value of b is :"<<y;
   return;
}
int main(){
    int a,b;
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter b :";
    cin>>b;
   swap(a,b);

}