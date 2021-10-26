#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node* next;
};

struct node* insertatfront(struct node* head,int n){
        struct node* a=(struct node*) malloc(sizeof(struct node));
        a->data=n;
        a->next=head;
        head=a;
        return head;
}

struct node* insertatend(struct node* head,int n){

    struct node* temp=(struct node*) malloc(sizeof(struct node));
    temp->data=n;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    else{
        struct node* a=(struct node*) malloc(sizeof(struct node));
        a=head;
    
        while(a->next!=NULL){
            a=a->next;
        }
        a->next=temp;
        return head;
    }

}


void insertafterthis(struct node* head,int n,int m){
    if(head==NULL)
    {
        printf("empty list");
        return;
    }
    struct node* temp=(struct node*) malloc(sizeof(struct node));
    temp->data=n;

    while(head!=NULL){
        if(head->data==m)
        {
            temp->next=head->next;
            head->next=temp;
            break;
        }
        head=head->next;
    }
    if(head==NULL)
    printf("no such data");

}


void display(struct node* head){
    while(head!=NULL){
        cout<<head->data<<"-";
        head=head->next;

    }
}


int main()
{
    struct node* head=NULL;
    head=insertatfront(head,1);
    head=insertatfront(head,2);
    head=insertatfront(head,3);
    head=insertatfront(head,4);
    head=insertatfront(head,5);

    head=insertatend(head,6);
    head=insertatend(head,7);
    head=insertatend(head,8);
    head=insertatend(head,9);
    head=insertatend(head,10);

    insertafterthis(head,11,2);
    insertafterthis(head,11,7);
    insertafterthis(head,11,10);
    display(head);

}