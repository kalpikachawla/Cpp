#include<iostream>
using namespace std;
class Calculator{
public :
    int a;
    int b;

    Calculator(int a, int b){
        this -> a=a;
        this -> b=b;
    }
    void print(){
        int x = a+b;
        int y = a-b;
        int c = a*b;
        float d = (float)a/b;
        cout<<"Addition : "<<x<<endl;
        cout<<"Subtraction  : "<<y<<endl;
        cout<<"Multipication : "<<c<<endl;
        cout<<"Division : "<<d<<endl;
    }
};
int main(){
    Calculator z(9,7);
    z.print();
}