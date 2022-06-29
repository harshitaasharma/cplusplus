

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    // 153=1^3+5^3+3^3; is called armstrong number
    int n;
    cin>>n;
    int num=n;
    int arr[100];
    int i=0;
    while(n>0){
        arr[i]=n%10;
        n=n/10;
        i++;
    }
    int sum=0;
for(int j=i-1;j>=0;j--){
    sum=sum+pow(arr[j],3);
}

cout<<sum;
cout<<n;
if(sum==num){
    cout<<"yes";
}
else{
    cout<<"no";
}
    return 0;
}
