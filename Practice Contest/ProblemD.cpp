#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int totalCandy=0;
    for(int i=1;i<=n;i++){
        totalCandy+=i;
    }
    cout<<totalCandy<<endl;
}