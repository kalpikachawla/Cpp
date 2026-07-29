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
    int x=90;
   int *ptr = new int(55);
   cout<<x<<endl;
    cout<<*ptr<<endl;
}