// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    n=101001;
    int arr[100];
    int i;
    for( i=0;i<=100;i++){
       if(n>0)
       { arr[i]=n%10;
        n=n/10;}
        else{
            break;
        }
    }
    
    for(int j=0;j<i;j++){
        cout<<arr[j];
        cout<<endl;
    }
 cout<<i;
 int a2[i];
 int k=0;
 for(int j=i-1;j>=0;j--){
     a2[k]=arr[j];
     k++;
 }
 for(int j=0;j<i;j++){
        cout<<a2[j];
        cout<<endl;
    }
    k=0;
    for(int j=i-1;j>=0;j--){
        arr[k]=a2[j]*pow(2,(i-1-j));
        k++;
    }
    int sum=0;
    for(int j=0;j<i;j++){
        sum=sum+arr[j];
    }
cout<<sum;
    return 0;
}
