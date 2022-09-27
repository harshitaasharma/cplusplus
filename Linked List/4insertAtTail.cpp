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

void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    temp->next=NULL;
    tail=temp;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    
    Node* node1=new Node(10);
    // cout<<"Data="<<node1->data<<endl;
    // cout<<"Next="<<node1->next<<endl;
    
    Node* head=node1;
    Node* tail=node1;
    
    print(head);
    cout<<endl;
    
    insertAtHead(head,20);
       insertAtHead(head,15);
       print(head);
         cout<<endl;
       
       insertAtTail(tail,1);
       print(head);
         cout<<endl;
         insertAtTail(tail,2);
       print(head);
         cout<<endl;
       
    
    
    return 0;
}
