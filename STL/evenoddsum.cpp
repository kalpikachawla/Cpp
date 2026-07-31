#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter n :";
    cin>>n;
    cout<<"Enter all the elements :\n";
    for(int i=0; i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int evensum=0;
    int oddsum=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]%2==0){
            evensum+=v[i];
        }
        else{
            oddsum+=v[i];
        }
    }
    cout<<"The sum of even numbers is : "<<evensum<<endl;
    cout<<"The sum of odd numbers is : "<<oddsum<<endl;
}