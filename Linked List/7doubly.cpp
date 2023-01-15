#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
 Node* next;
 Node* pvs;

 Node(int d){
    this->data=d;
    this->next=NULL;
    this->pvs=NULL;
 }
};

void insertAtHead(Node* &head,int d){
    Node* newnode=new Node(d);
    newnode->next=head;
    head->pvs=newnode;
    newnode->pvs=NULL;
    head=newnode;
}

void printlen(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    cout<<endl<<len<<endl;
}

void traverse(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){

Node * node1=new Node(33);
Node* head=node1;
cout<<node1->data<<endl;
cout<<node1->next<<endl;
cout<<node1->pvs<<endl;

insertAtHead(head,44);
insertAtHead(head,54);
traverse(head);
printlen(head);

    return 0;
}
