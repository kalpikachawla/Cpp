#include<iostream>
using namespace std;
int main(){
  int arr[5] = {1,2,3,5,6};
  int sumeven=0;
  int sumodd=0;
  for(int i=0; i<=4; i++){
    if(i%2==0){
        sumeven+=arr[i];
    }
    else{
        sumodd+=arr[i];
    }
  }
  int difference = sumeven-sumodd;
  cout<<difference;
}