#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  
  Node(int d){
      this->data=d;
      this->next=NULL;
  }
};

void insertAtHead(Node* &head,int d){
    Node* temp= new Node(d);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail,int d){
    Node* temp= new Node(d);
    tail->next=temp;
    temp->next=NULL;
}

void insertAtPos(Node* &head,Node* &tail,int d,int pos){
    Node* temp=head;
    if(pos==1){
        insertAtHead(head,d);
        return;
    }
    for(int i=0;i<pos-2;i++){
        temp=temp->next;
    }
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    Node* newnode=new Node(d);
    newnode->next=temp->next;
    temp->next=newnode;
    
}

void deletePos(Node* &head,Node* &tail,int pos){
    Node* temp=head;
    //DELETE FROM HEAD
    if(pos==1){
        temp=temp->next;
        head=temp;
        return;
    }
    int count=1;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    if(temp->next->next==NULL){
        temp->next=temp->next->next;
        tail=temp;
        return;
    }
    temp->next=temp->next->next;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    
    Node* newnode= new Node(10);
    Node* head=newnode;
    Node* tail=newnode;
    print(head);
    cout<<endl<<"Insert at Beginning=";
    insertAtHead(head,4);
    print(head);
    cout<<endl<<"Insert at End=";
    insertAtTail(tail,9);
    print(head);
     cout<<endl<<"Insert at 2nd pos=";
    insertAtPos(head,tail,77,2);
    print(head);
    
    cout<<endl<<"Delete at 4th pos=";
    deletePos(head,tail,4);
    print(head);cout<<endl;
  
    cout<<"HEAD="<<head->data<<endl;
    cout<<"TAIL="<<tail->data<<endl;
    return 0;
}
