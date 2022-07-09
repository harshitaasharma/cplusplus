// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class student{
     string name;
  public:
  int age;
  bool gender;
  
  ~student(){
      cout<<"Destructor called"<<endl;//at end of main fucntion
  }
  
  bool operator == (student &s){
      if(name==s.name && age==s.age && gender==s.gender){
          return 1;
      }
      else{
          return 0;
      }
  }
  
  void setName(string s){
      name=s;
  }
  void getName(){
      cout<<name<<endl;
  }
  student(){
      cout<<"Default Constructor"<<endl;
  }
  student(string s,int a,bool k){
      cout<<"Parameterised Constructor"<<endl;
      name=s;
      age=a;
      gender=k;
  }
  student(student &s){
       cout<<"Copy Constructor"<<endl;
      name=s.name;
      age=s.age;
      gender=s.gender;
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
 
student a("Tim",18,1);
student b;
//or student c(a);
student c=a;//by default shallow copy else here deep copy as copy constructor present
if(c==a){
    cout<<"same"<<endl;
}
else{
    cout<<"not same"<<endl;
}

    return 0;
}
