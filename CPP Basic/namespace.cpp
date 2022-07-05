#include<iostream>
using namespace std;

namespace one{
     int x =0;
    void fun(){
        cout<<"I am abdul hakim"<<endl;
       
    }
}

namespace two{
    void fun2(){
        cout<<"I am a student of class eleven"<<endl;

    }
}

using namespace two;
int main(){

    one::fun();
    fun2();
    return 0;
}