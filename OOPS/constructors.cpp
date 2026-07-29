#include<iostream>
using namespace std;
class Person{
public :
string name;
int age;
string hobby;
string address;

Person(){

}

Person(string a,int b, string c){// sequence same honi chahiye
    name = a;
    age = b;
    hobby = c;
}


Person(string a,int b, string c, string d){
    name = a;
    age = b;
    hobby = c; 
    address = d;
}
};
int main(){
   Person p1("Rashi",16,"Studying");
   cout<<"Name->"<< p1.name<<endl;
   cout<<"Age->"<< p1.age<<endl;
   cout<<"Hobby->"<< p1.hobby<<endl;
   cout<<endl;



   Person p2(" Rohan",13," Playing");
   cout<<"Name->"<< p2.name<<endl;
   cout<<"Age->"<< p2.age<<endl;
   cout<<"Hobby->"<< p2.hobby<<endl;
   cout<<endl;
   Person p3;
   p3.name = "Sameer";
   p3.age = 18;
   p3.hobby = "Driving";
    Person p5(p1);


   cout<<"Name->"<< p3.name<<endl;
   cout<<"Age->"<< p3.age<<endl;
   cout<<"Hobby->"<< p3.hobby<<endl;
   cout<<endl;



    Person p4("Sam",17,"Travelling","Nagpur");
     cout<<"Name->"<< p4.name<<endl;
   cout<<"Age->"<< p4.age<<endl;
   cout<<"Hobby->"<< p4.hobby<<endl;
   cout<<"Address->"<<p4.address<<endl;
   cout<<endl;
    cout<<"Name->"<< p5.name<<endl;
   cout<<"Age->"<< p5.age<<endl;
   cout<<"Hobby->"<< p5.hobby<<endl;
   
   cout<<endl;


}