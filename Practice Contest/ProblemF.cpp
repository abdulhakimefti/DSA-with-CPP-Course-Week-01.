#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int big=0;
    if(a>b){
        if(a>c){
            big =a;
        }
        else{
            big =c;
        }
    }
    else{
        if(b>c){
            big =b;
        }
        else{
            big = c;
        }
    }
    int others =0;
    if(big==a){
        others=b+c;
    }
    else if(big==b){
        others= a+c;
    }
    else{
        others = a+b;
    }
    if(big==others){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}