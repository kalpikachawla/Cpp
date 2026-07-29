#include<iostream>
using namespace std;
class student{
public :
string name;
int rollno; 
float gpa;
};
int main(){
    student s1;
    s1.name = "Kalpika";
    s1.rollno = 12;
    s1.gpa =  8.5;


      student s2;
    s2.name = "Uddish";
    s2.rollno = 15;
    s2.gpa =  6.4;
    cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rollno<<endl;
    cout<<s2.name<<" "<<s2.gpa<<" "<<s2.rollno<<endl;
}