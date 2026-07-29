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
int main(){
    Cricketer c1("Virat Kohli",25000);
    Cricketer c2("Rohit Sharma",18000);
    cout<<c1.name<<endl<<c1.run<<endl;
    cout<<c2.name<<endl<<c2.run;
    
}