#include<iostream>
using namespace std;
class Student{
public :
    int rollno;
    string name;
    Student(int rn,string n){
        rollno=rn;
        name=n;
    }
    void print(){
        cout<<rollno<<" ";
        cout<<name;
    }
};
int main(){
    Student s1(12, "Kalpika");
    s1.print();
}
    
    