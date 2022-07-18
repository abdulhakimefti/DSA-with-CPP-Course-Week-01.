#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int one = a-b;
    int two = b-c;
    if(one==two){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}