// Online C++ compiler to run C++ program online

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    int flag=0;
    cin>>n;
    if(n==0||n==1||n==2){
        cout<<"prime";
    }
    else if(n%2==0){
        cout<<"not a prime number";
    }
    else{
     for(int i=3;i<sqrt(n);i++){
       if(n%i==0){
           flag=0;
           cout<<"not prime";
           break;
       }
      flag=1;
   } 
   if(flag==1){
       cout<<"prime";
   }   
    }
   
    return 0;
}
