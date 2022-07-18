#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[11],b[11],c[11];
    cin>>a>>b>>c;
    bool isA = false;
    int lenOfa = strlen(a);
    int lenOfb = strlen(b);
   
    if(a[lenOfa-1]==b[0]){
        if(b[lenOfb-1]==c[0]){
            isA=true;
        }
    }
    if(isA){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}