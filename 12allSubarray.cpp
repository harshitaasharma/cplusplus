
#include <bits/stdc++.h>
using namespace std;
//Subarray(contiguous part of array)
int main() {
   int n=6;
   int arr[6]={0,1,2,4,7};
   for(int i=0;i<n;i++){
       for(int j=i;j<n;j++){
           for(int k=i;k<j;k++){
               cout<<arr[k];
           }cout<<endl;
       }
   }
   
    return 0;
}
