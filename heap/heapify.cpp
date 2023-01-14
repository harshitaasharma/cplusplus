#include<bits/stdc++.h>
using namespace std;


class heap{
public:
int arr[100];
int size=0;

void insert(int n){
    size++;
    int index=size;
    arr[index]=n;

    while(index>1){
        int parent=index/2;
        if(arr[index]>arr[parent]){
            swap(arr[index],arr[parent]);
            index=parent;
        }
        else{
            return;
        }
    }

}

void deleted(){
    if(size==0){
        return;
    }
arr[1]=arr[size];
size--;
int i=1;
while(i<size){
    int left=2*i;
    int right=2*i+1;

    if(left<size && arr[i] <arr[left]){
        swap(arr[i],arr[left]);
        i=left;
    }
    else if(right<size && arr[i] <arr[right]){
        swap(arr[i],arr[right]);
        i=right;
    }
    else{
        return;
    }

}
}


void print(){
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }
}

};


void heapify(int arr[],int n,int i){
int largest=i;
int left=2*i;
int right=(2*i)+1;

if(left<n && arr[left]> arr[largest]){
    largest=left;
}
if(right<n && arr[right]> arr[largest]){
    largest=right;
}
if(largest!=i){
    swap(arr[largest],arr[i]);
    heapify(arr,n,largest);
}



}


int main(){

heap h;
h.insert(50);
h.insert(55);
h.insert(53);
h.insert(52);
h.insert(54);
h.print();
cout<<endl;
h.deleted();
h.print();

cout<<endl;
int arr[6]={-1,54,53,55,52,50};
for(int i=5/2;i>0;i--){
heapify(arr,5,i);
}
cout<<"printing array"<<endl;
for(int i=1;i<=5;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}#include<bits/stdc++.h>
using namespace std;


class heap{
public:
int arr[100];
int size=0;

void insert(int n){
    size++;
    int index=size;
    arr[index]=n;

    while(index>1){
        int parent=index/2;
        if(arr[index]>arr[parent]){
            swap(arr[index],arr[parent]);
            index=parent;
        }
        else{
            return;
        }
    }

}

void deleted(){
    if(size==0){
        return;
    }
arr[1]=arr[size];
size--;
int i=1;
while(i<size){
    int left=2*i;
    int right=2*i+1;

    if(left<size && arr[i] <arr[left]){
        swap(arr[i],arr[left]);
        i=left;
    }
    else if(right<size && arr[i] <arr[right]){
        swap(arr[i],arr[right]);
        i=right;
    }
    else{
        return;
    }

}
}


void print(){
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }
}

};


void heapify(int arr[],int n,int i){
int largest=i;
int left=2*i;
int right=(2*i)+1;

if(left<n && arr[left]> arr[largest]){
    largest=left;
}
if(right<n && arr[right]> arr[largest]){
    largest=right;
}
if(largest!=i){
    swap(arr[largest],arr[i]);
    heapify(arr,n,largest);
}



}


int main(){

heap h;
h.insert(50);
h.insert(55);
h.insert(53);
h.insert(52);
h.insert(54);
h.print();
cout<<endl;
h.deleted();
h.print();

cout<<endl;
int arr[6]={-1,54,53,55,52,50};
for(int i=5/2;i>0;i--){
heapify(arr,5,i);
}
cout<<"printing array"<<endl;
for(int i=1;i<=5;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}
