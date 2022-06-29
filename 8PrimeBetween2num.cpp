
#include <iostream>
using namespace std;
int main() {
    int a;
    int b;
    cin>>a>>b;
    for(int i=a+1;i<b;i++){
        if(i%2==0){
            continue;
        }
        cout<<i;
    }

    return 0;
}
