// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class student{
     string name;
  public:
  int age;
  bool gender;
  
  void setName(string s){
      name=s;
  }
  
    void printInfo(){
        cout<<"Name=";
        cout<<name<<endl;
         cout<<"Age=";
        cout<<age<<endl;
         cout<<"Gender=";
        cout<<gender<<endl;
    }
    
};
int main() {
 
// student a;
// a.name="Tim";
// a.age=18;
// a.gender=1;
// a.printInfo();

student arr[3];
for(int i=0;i<3;i++){
    string s;
    cout<<"Name=";
    cin>>s;
    arr[i].setName(s);
    cout<<"Age=";
    cin>>arr[i].age;
    cout<<"Gender=";
    cin>>arr[i].gender;
}
for(int i=0;i<3;i++){
    arr[i].printInfo();
}


    return 0;
}
