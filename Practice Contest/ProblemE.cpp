#include<iostream>
using namespace std;

int main(){
    int n,k,x,y;
    cin>>n>>k>>x>>y;
    int total = n * x;
    if(n>k){
        int othersNight = n-k;
        int decreaseTak = x-y;
        int dTak = othersNight*decreaseTak;
        total = total-dTak;

    }
    cout<<total<<endl;
}