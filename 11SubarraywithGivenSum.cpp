
#include <bits/stdc++.h>
using namespace std;
//SUBARRAY WITH GIVEN SUM
int main() {
   int n=5;
   int s=6;
   int flag=0;
   int i,j;
   int arr[n]={1,2,3,7,5};
   for( i=0;i<n;i++){
       int sum=arr[i];
       for(j=i+1;j<n;j++){
           sum=sum+arr[j];
           if(sum==s){
               flag=1;
               break;
           }
           if(sum>s){
               break;
           }
       }
       if(flag==1){
       cout<<i+1<<" "<<j+1;
       break;
   }
   }
   
    return 0;
}
