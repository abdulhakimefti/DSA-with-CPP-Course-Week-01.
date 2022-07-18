#include<iostream>
using namespace std;
int main(){
   /* int a,b;
    cin>>a>>b;
    int mn,mx;
    mn = min(a,b);
    mx=max(a,b);
    cout<<mn<<" "<<mx<<endl; */

    //Multiple value 

   /* int c,d,e,f;
    cin>>c>>d>>e>>f;
    int mn2 ,mx2;
    mn2 = min(c ,min(d,min(e,f)));
    mx2 = max(c,max(d,max(e,f)));
    cout<<mn2<<" "<<mx2<<endl; */

    // min max array 
    int arr[5] ={56,33,23,24,2};
    int mn = arr[0];
    int mx = arr[0];
    for(int i=0;i<5;i++){
        mn = min(mn,arr[i]);
        mx = max(mx,arr[i]);
    }
    cout<<mn<<" "<<mx<<endl;
    return 0;
}