
#include <bits/stdc++.h>
using namespace std;
//first repeating element
int main() {
    int n=7;
int arr[n]={1,5,3,4,3,5,6};
int k=0;
int temp=arr[0];
int flag=0;
for(int i=1;i<n;i++){
for(int j=i+1;j<n;j++){
    if(arr[i]==arr[j]){
        flag=1;
        k=i;
        break;
    }
}
if(flag==1){
    cout<<(k+1);
    break;
}
}

    return 0;
}
