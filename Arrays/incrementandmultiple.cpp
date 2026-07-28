#include<iostream>
using namespace std;
int main(){
    int arr[4] = {1,3,4,5};
    for(int i=0; i<=3; i++){
        if(i%2==0){
            arr[i]+=10;
        }
        else{
            arr[i]*=2;
        }
        cout<<arr[i]<<" ";
    }
    
}
