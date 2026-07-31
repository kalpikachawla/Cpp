#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter n :";
    cin>>n;
    cout<<"Enter all the elements :\n";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int evencount=0;
    int oddcount=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]%2==0) evencount ++;
        else{
            oddcount++;
        }
    }
    cout<<"The total even numbers are : "<<evencount<<endl;
    cout<<"The total odd numbers are : "<<oddcount;
}

    
