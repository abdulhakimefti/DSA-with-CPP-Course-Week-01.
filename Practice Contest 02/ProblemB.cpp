#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[100001];
    cin>>str;
    int len = strlen(str);
    char str2[len];
    int j=0;
    for(int i =0;i<len;i++){
        if(i%2==0){
            str2[j] = str[i];
            j++;
        }
    }
    str2[j]='\0';
    cout<<str2<<endl;
}