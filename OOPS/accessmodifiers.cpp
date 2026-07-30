#include<iostream>
using namespace std;
class Student{
public :
    int rno;
    string name;
    void display(){
        cout<<rno<<" "<<name<<" "<<marks<<endl;
    }

    Student(int rno,string name,float marks){
        this -> rno = rno;
         this -> name = name;
          this -> marks = marks;

    }

    float getmarks(){
        return marks;
    }

    void setmarks(float m){
        marks = m;
    }
private :
    float marks;
};
int main(){
    Student s1(77,"Kalpika Chawla",89.7);
    cout<<s1.getmarks()<<endl;
    s1.setmarks(90.7);
    cout<<s1.getmarks()<<endl;
}