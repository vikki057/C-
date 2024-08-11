#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*next;
};
void traversing(struct node*ptr){
    int count=0;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
        count++;
    }
    printf("No. of nodes are %d",count);
}

struct node*insertInFirst(struct node*temp,int info){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=info;
    ptr->next=temp;
    return ptr;
}
int main(){
    struct node*temp,*second,*third;
    temp=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    temp->data=10;
    temp->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=NULL;
    temp=insertInFirst(temp,40);
    traversing(temp);
}