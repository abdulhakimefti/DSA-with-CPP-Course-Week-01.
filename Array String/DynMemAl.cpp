#include<iostream>
using namespace std;

int main(){
    // int *ptr = new int[10];
    int *ptr = new int[10]{0};
    for(int i=0;i<10;i++){
        cout<<ptr[i]<<" ";
    }
    delete ptr;
    return 0;
}