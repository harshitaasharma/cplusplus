#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int a[n];
    while(n>0){
        a[i]=n%2;
        n=n/2;
        i++;
    }
    
    for( i=i-1;i>=0;i--){
        cout<<a[i];
    }
    
    
    
    return 0;
}
