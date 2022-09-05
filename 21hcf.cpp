#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    while(m!=n){
        if(m>n){
            m=m-n;
        }
        else{
            n=n-m;
        }
    }
    cout<<m;
    
    
    
    return 0;
}
