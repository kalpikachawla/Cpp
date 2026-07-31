#include<iostream>
using namespace std;
class Circle{
public :
    int radius;
    float pi;

public :
    Circle(int r,float pi){
        radius = r;
    this -> pi =pi;
    }

public :
    void print(){
        float area = pi*radius*radius;
        cout<<"Area of circle is : "<<area<<endl;
        float circumference = 2*pi*radius;
        cout<<"Circumference of circle is : "<<circumference<<endl;
    }
};
int main(){
    Circle c(6,3.14);
    c.print();
}