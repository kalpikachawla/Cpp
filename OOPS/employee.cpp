#include<iostream>
#include<vector>
using namespace std;
class Employee{
public :
    int employeeid;
    string name;
    float salary;

Employee(){
    employeeid = 0;
    name = "";
    salary = 0.0;
}

    Employee(int i,string n, float s){
        employeeid = i;
        name = n;
        salary = s;
    }


    void input(){
        cout<<"Enter Employee ID :"<<endl;
        cin>>employeeid;
        cin.ignore();
        cout<<"Enter name :"<<endl;
        getline(cin,name);
        cout<<"Enter salary :"<<endl;
        cin>>salary;
    }

    void print(){
        cout<<"Employee ID :"<<employeeid<<endl;
        cout<<"Name of the employee :"<<name<<endl;
        cout<<"Salary of employee :"<<salary<<endl;
    }
};
int main(){
    Employee a;
    a.input();
    a.print();
    
}