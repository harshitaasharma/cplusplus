#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  
  Node(int data){
      this->data=data;
      this->next=NULL;
  }
  
};

int main(){
    
    Node* node1=new Node(10);
    cout<<"Data="<<node1->data<<endl;
    cout<<"Next="<<node1->next<<endl;
    
    
    
    return 0;
}
