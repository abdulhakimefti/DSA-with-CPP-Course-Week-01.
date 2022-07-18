#include<iostream>
using namespace std;

void print(int *x){
    *x = *x * 2;
}

int main(){
    int a;
    cin>>a;
    print(&a);
    cout<<a<<endl;
    int b;
    cin>>b;
    int *p = &b;
    int **q = &p;
    cout<<**q<<endl;
}