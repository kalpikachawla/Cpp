#include<iostream>
using namespace std;
class Cricketer{
public :
     string name; 
    int run; 

    Cricketer(string name,int run){
        this -> name = name;
       this -> run = run;
    }
};
void change(Cricketer* c){
    c->run = 90;
    cout<<c->run;
}
int main(){
    Cricketer c1("Virat Kohli",25000);
    // Cricketer c2("Rohit Sharma",18000);
    Cricketer*p1 = &c1;
    cout<<c1.run<<endl;
    change(&c1);
}