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

void insertAtHead(Node* &head,int d){
    Node* nodenew=new Node(d);
    nodenew->next=head;
    head=nodenew;
}

void print(Node* &head){
    cout<<endl;
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    
    Node* node1=new Node(10);
    // cout<<"Data="<<node1->data<<endl;
    // cout<<"Next="<<node1->next<<endl;
    
    Node* head=node1;
    
    print(head);
    
    insertAtHead(head,20);
       print(head);
    
    
    return 0;
}
