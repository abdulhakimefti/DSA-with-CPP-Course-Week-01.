#include<bits/stdc++.h>
using namespace std;

int main(){
    int g,t;
    cin>>g>>t;
    if(t>=g){
        cout<<0<<endl;
    }
    else{
        int remaining ;
        remaining = g-t;
        cout<<remaining<<endl;
    }
    return 0;
}