#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[100001];
    cin>>str;
    int len = strlen(str);
    // sort(str,str+len);
    int fq[26]={0};
    int j=0;
    for(int i=0;i<len;i++){
        for(int k=0;k<len;k++){
            if(str[i]==str[k]){
                fq[str[i]-97] = -1;
            }
        }  
    }
    char missing ;
    for(int i=0;i<26;i++){
        if(fq[i]==0){
            missing = i+97;
            break;
        }
    }
    if(missing){
        cout<< missing<<endl;
    }
    else{
        cout<<"None"<<endl;
    }
   
    return 0;
}