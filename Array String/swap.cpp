#include<iostream>
using namespace std;

int main(){
    int arr[5]={3,2,4,1,5},n=5;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                // int temp = arr[j];
                // arr[j] = arr[i];
                // arr[i] =temp;
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}