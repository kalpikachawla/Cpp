#include<iostream>
using namespace std;
class Scooty{
public :
    int speed;
    float mileage;
};
class Bike :public Scooty{
public :
    int gears;
};
int main(){
    Bike b1;
    b1.speed = 120;
    b1.gears = 6;
    b1.mileage= 12.5;

}