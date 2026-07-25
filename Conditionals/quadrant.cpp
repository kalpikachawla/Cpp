#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter abcissa :";
    cin>>x;
     cout<<"Enter ordinate :";
    cin>>y;
    if(x>0 && y>0){
        cout<<"The points lies in 1st quadrant";
    }
    else if(x<0 && y>0){
        cout<<"The points lies in 2nd quadrant";
    }
    else if(x<0 && y<0){
        cout<<"The points lies in 3rd quadrant";
    }
    else if(x>0 && y<0){
        cout<<"The points lies in 4th quadrant";
    }
    else if (x==0 && y==0){
        cout<<"The points lies on origin";
    }
    else if(x==0 && y>0){
        cout<<"The points lies on y axis";
    }
    else{
        cout<<"The points lies on x axis";
    }

}