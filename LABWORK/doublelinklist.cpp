#include<iostream>
using namespace std;
struct Node{
    int info;
    Node* prev;
    Node* next;
};
Node* front = NULL;
Node* rear=NULL;

void dq_deletefront(){
    Node* temp = front ;
    if(front == NULL){
        cout<<"Dq is empty";
    }
    else if(front == rear){
        front = rear = NULL;
        delete temp;
    }
    else{
        front = front->next;
        front->prev = NULL;
        delete temp;
    }
}

void dq_deleterear(){
    Node* temp = rear ;
    if(front == NULL){
        cout<<"Dq is empty";
    }
    else if(front == rear){
        front = rear = NULL;
        delete temp;
    }
    else{
        rear = rear->prev;
        rear->next = NULL;
        delete temp;
    }
}

void dq_insertfront(int x){
    Node* newNode = new Node();
    newNode->info = x;
    if(front == NULL){
        newNode->prev  = newNode->next = NULL;
        rear = front = newNode;
    }
    else{
        newNode->prev = NULL;
        newNode->next = front ;
        front->prev = newNode;
        front = newNode;
    }
}

void dq_insertrear(int x){
    Node* newNode = new Node();
    newNode->info = x;
    if(front == NULL){
        newNode->prev  = newNode->next = NULL;
        rear = front = newNode;
    }
    else{
        newNode->prev = rear;
        newNode->next = NULL;
        rear->next = newNode;
        rear = newNode;
    }
}
void display(){
    if(front == NULL){
        cout<<"Dq is empty";
        return;
    }
    Node* temp = front;
    while(temp!=NULL){
        cout<<temp->info<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    dq_insertfront(10);
    dq_insertfront(20);
    display();
    dq_insertfront(30);
    dq_insertfront(40);
    display();
    dq_insertrear(50);
    display();
    dq_insertrear(60);
    display();
    dq_deletefront();
    display();
    dq_deleterear();
    display();
}