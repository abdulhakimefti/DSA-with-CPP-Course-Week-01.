#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[100];
    cin>>str;
    char str2[10];
    int len = strlen(str);
    str2[0]=str[0];
    int counter = len-2;
    if(counter<10){
        str2[1]=counter + '0';
    }
    else{
        int d = counter/10;
        int e = counter%10;
        str2[1]=d +'0';
        str2[2]=e + '0';

    }
   if(counter<10){
     str2[2]= str[len-1];
     str2[3]='\0';
   }
   else{
    str2[3]=str[len-1];
    str2[4] = '\0';
   }
    cout<<str2<<endl;
}