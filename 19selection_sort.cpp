// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int loc;
    int arr[5]={7,4,9,8,1};
    for(int i=0;i<(n-1);i++){
        int min=arr[i];
        loc=i;
        for(int j=i+1;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                loc=j;
                
            }
        }
        int temp=arr[loc];
        arr[loc]=arr[i];
        arr[i]=temp;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
