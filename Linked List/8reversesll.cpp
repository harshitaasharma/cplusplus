#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node * next;
Node(int d){
    this->data=d;
    this->next=NULL;
}
};

void insertAtTail(Node* &tail,int d){
Node* newnode= new Node(d);
tail->next=newnode;
tail=newnode;
newnode->next=NULL;
}

void reverse(Node* &head){
    Node* pvs=NULL;
    Node* curr=head;
    Node* fwd=NULL;
    while(curr!=NULL){
        Node* fwd=curr->next;
        curr->next=pvs;
        pvs=curr;
        curr=fwd;
    }
    head=pvs;
}

void traverse(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main(){

Node* node1=new Node(10);
Node* head=node1;
Node* tail=node1;
insertAtTail(tail,88);
insertAtTail(tail,14);
traverse(head);
cout<<endl;
reverse(head);
traverse(head);

return 0;
}
