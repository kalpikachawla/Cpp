#include<iostream>
using namespace std;
void change(int brr[]){// array apne aap pass by reference hote hai
    brr[0] = 9;
    brr[4] = 7;
}
int main(){
    int arr[5]={1,2,3,4,5};
   for(int i=0; i<=4; i++){
    cout<<arr[i]<<" ";
   }
    change(arr);
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }
}
