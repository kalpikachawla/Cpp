#include<iostream>
using namespace std;
class Books{
public :
    string name;
    float price;

    Books(string n, float p){
        name = n;
        price = p;
    }

    void print(){
        cout<<"Name of book : "<<name<<endl;
        cout<<"Price of book : "<<price<<endl;
    }
};
int main(){
    string n;
    float p;
    cout<<"Enter the name of book :\n";
    getline(cin,n);
    cout<<"Enter the price of book :\n";
    cin>>p;
    Books a(n,p);
    a.print();

}