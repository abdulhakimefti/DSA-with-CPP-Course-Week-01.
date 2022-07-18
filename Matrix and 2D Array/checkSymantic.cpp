#include<bits/stdc++.h>
using namespace std;

int main(){
    int row,col,i,j;
    cin>>row>>col;
    int a[row][col];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(a[i][j] != a[j][i]){
                cout<<"NO"<<endl;
                return 0;
            }

        }
    }
    cout<<"YES"<<endl;
    
}