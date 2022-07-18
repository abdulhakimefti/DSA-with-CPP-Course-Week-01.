#include<bits/stdc++.h>
using namespace std;

int main(){
   char a[51],b[51];
   cin>>a>>b;
    int lenOfa = strlen(a);
    int lenOfb = strlen(b);
    int lenOfc = lenOfa + lenOfb ;
    char c[101];
    int i=0;
    for(int j=0,k=0;i<lenOfc;i++){
        if(i%2==0){
            c[i] = a[j];
            j++;
        }
        else{
            c[i] = b[k];
            k++;
        }
    }
    c[i] ='\0';
    cout<<c<<endl;
}