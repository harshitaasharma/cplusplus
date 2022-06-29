
#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;
int t1=0;
int t2=1;
int sum;
for(int i=0;i<=n;i++){
    cout<<t1<<endl;
    sum=t2+t1;
    t1=t2;
    t2=sum;
}

    return 0;
}
