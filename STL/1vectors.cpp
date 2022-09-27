#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    
    //initialization
    vector<int>v;
    vector<int>a(5);
    //a size=5;//default initialization=0
    for(int i=0;i<a.size();i++){
        cout<<a.at(i)<<",";
    }
    cout<<endl;
    
    //initialization with 7
    vector<int>b(5,7);
     for(int i=0;i<b.size();i++){
        cout<<b.at(i)<<",";
    }
    cout<<endl;
    
    //vector elements copy
    vector<int>c(b);
     for(int i=0;i<c.size();i++){
        cout<<c.at(i)<<",";
    }
    cout<<endl;
    
    
    cout<<"Capacity="<<v.capacity()<<endl;//0
    v.push_back(1);
    cout<<"Capacity="<<v.capacity()<<endl;//1
    
    v.push_back(2);
    cout<<"Capacity="<<v.capacity()<<endl;//2
    
    v.push_back(3);
    cout<<"Capacity="<<v.capacity()<<endl;//4 //doubles the array
    
    
    
    cout<<"Size="<<v.size()<<endl;//no of elements=3
    
    
    cout<<"2nd index="<<v.at(2)<<endl;
    
    
    cout<<"Front="<<v.front()<<endl;
    cout<<"Back="<<v.back()<<endl;
    
    cout<<"Before pop=";
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<",";
    }
    cout<<endl<<"After pop=";
    v.pop_back();
     for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<",";
    }
    cout<<endl<<"After push=";
    v.push_back(3);
      for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<",";
    }
    
    //Whenever we clear our vector "SIZE" becomes 0 not CAPACITY
    
    cout<<endl<<"Before Clear size="<<v.size()<<endl;
    v.clear();
    cout<<"After Clear size="<<v.size()<<endl;
    
    
    
    
    return 0;
}
