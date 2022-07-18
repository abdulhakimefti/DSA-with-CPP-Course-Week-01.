#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[27];
    cin>>str;
    int len= strlen(str);
    sort(str,str+len);
    int fq[26]={0};
    bool isA = false;
    for(int i=0;i<len;i++){
        if(fq[str[i]-97]==-1){
          isA = true;break;
        }
        else{
            fq[str[i]-97] = -1;
        }
    }
    if(isA){
         cout<<"no"<<endl;
    }
    else{
         cout<<"yes"<<endl;
      
    }
    return 0;
}