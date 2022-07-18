#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int areaOne = a*b;
    int areaTwo = c*d;
    if(areaOne>=areaTwo){
        cout<<areaOne<<endl;
    }
    else{
        cout<<areaTwo<<endl;
    }

}