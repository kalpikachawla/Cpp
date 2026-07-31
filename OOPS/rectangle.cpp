#include<iostream>
using namespace std;
class Rectangle{
public :
    int length;
    int breadth;
public :
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }

public :
     void print(){
        int ans = length * breadth;
        cout<<"Ans : "<<ans;
     }
};
int main(){
    Rectangle a(2,3);
    a.print();
}