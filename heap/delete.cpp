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

int main(){

heap h;
h.insert(60);
h.insert(50);
h.insert(40);
h.insert(30);
h.insert(20);
h.insert(55);
h.print();
h.deleted();
h.print();





    return 0;
}
