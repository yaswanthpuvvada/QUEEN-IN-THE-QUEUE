#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
typedef struct node* queue;
queue front=NULL;
queue rear=NULL;
void enqueue(int d){
    queue new=(queue)malloc(sizeof(struct node));
    new->data=d;
    new->next= NULL;
    if(front==NULL){
    front=new;
    rear=new;
    }
    else{
        rear->next=new;
        rear=new;
    }
}
void dequeue(){
    if(rear==front){
        printf("u");
    }
    queue tep=front;
    front=front->next;
    free(tep);
}

int main() {
     enqueue(510);
    enqueue(20);
    enqueue(50);
  // dequeue();
    queue current = front; // Use front as the starting point for iteration
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }

    return 0;
}