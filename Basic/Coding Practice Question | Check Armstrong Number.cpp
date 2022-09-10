#include<bits/stdc++.h>
using namespace std;
int main(){
    //find armstrong number
    int n;
    cin>>n;
    int k=n;
    int j=0;
    int arr[100];
    for(int i=0;i<100;i++){
        arr[i]=0;
    }
    while(n>0){
        int temp=n%10;
        n=n/10;
        arr[j]=pow(temp,3);
        j++;
    }
    int sum=0;
    for(int i=0;i<j;i++){
        sum+=arr[i];
    }
    if(sum==k){
        cout<<"Yes it is an Armstrong number";}
        else{
            cout<<"No it is not an Armstrong number";
        }
 return 0;   
}
