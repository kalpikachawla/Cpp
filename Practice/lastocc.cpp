#include<iostream>
using namespace std;
int lastocc(int arr[], int n, int x){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==x){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid]>x){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[6]={1,2,2,3,5,6};
    int x = 2;
    cout<<lastocc(arr,6,x);
}