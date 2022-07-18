#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int total = n * 800;
    int customers = n/15;
    total = total - (customers*200);
    cout<<total<<endl;
    return 0;
}