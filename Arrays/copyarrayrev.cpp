#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[5];
    for(int i=0; i<=4; i++){
        int j=4-i;
        brr[i]=arr[j];
      }
      for(int i=0; i<=4; i++){
        cout<<brr[i]<<" ";
      }
}