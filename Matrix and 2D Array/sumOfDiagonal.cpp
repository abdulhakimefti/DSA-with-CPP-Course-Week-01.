#include<bits/stdc++.h>
using namespace std;


int main(){
    int row,col,i,j;
    cin>>row>>col;
    int a[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<row;i++){
        sum+=a[i][i];
    
        
    }
    cout<<sum<<endl;
}