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

    void print(Cricketer c){
        cout<<c.name<<" "<<c.run<<endl;
    }
};
int main(){
    Cricketer c1("Virat Kohli",25000);
    Cricketer c2("Rohit Sharma",18000);
    c1.print(c1);
    c2.print(c2);
    
}