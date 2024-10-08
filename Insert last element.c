#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*next;
};

struct node*insertEnd(struct node*first,int data){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    struct node *ptr=first;
    temp->data=data;
    while(ptr->next !=NULL){
        ptr=ptr->next;
    }
    temp->next=NULL;
    ptr->next=temp;
    return first;
}
void traversing(struct node* list){
    while(list!=NULL){
        printf("%d\n",list->data);
        list=list->next;
    }
}
    
int main(){
    struct node*first,*second,*third;
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    first->data=10;
    first->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=NULL;
    insertEnd(first,40);
    traversing(first);
}