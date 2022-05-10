// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct queue{
    int *arr;
    int size;
    int rear;
    int front;
};
int isfull(struct queue *ptr){
    if(ptr->rear==ptr->size){ return 1;}
    else{return 0;}
}
int isempty(struct queue *ptr){
    if(ptr->rear==ptr->front){return 1;}
    else{return 0;}
}
void inqueue(struct queue *ptr,int val){
    if(isfull(ptr))
        printf("Queue Overflow");
    else{
        ptr->rear++;
        ptr->arr[ptr->rear]=val;
    }
}
void dequeue(struct queue *ptr){
    if(isempty(ptr)){
        printf("Queue is Uderflow");
        //return -4;
    }
    else{
        ptr->front++;
        ptr->arr[ptr->front];
    }
}
void print(struct queue *ptr){
    int i;
    for(i=ptr->front+1;i<=ptr->rear;i++){
        printf("%d  ",ptr->arr[i]);
    }
}
int main()
{
    struct queue *qu=(struct queue *)malloc(sizeof(struct queue));
    qu->size=100;
    
    qu->rear=qu->front=-1;
    qu->arr=(int *)malloc(sizeof(int)*qu->size);
  inqueue(qu,99);
  inqueue(qu,2);
  inqueue(qu,3);
  print(qu);
 dequeue(qu);
  dequeue(qu);
  dequeue(qu);
  dequeue(qu);
 printf("\n After dequeue");
 print(qu);
 free(qu);
 print(qu);
   // printf("%d",isempty(qu));
   
  //  printf("%d",qu->rear);
    return 0;
}// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct queue{
    int *arr;
    int size;
    int rear;
    int front;
};
int isfull(struct queue *ptr){
    if(ptr->rear==ptr->size){ return 1;}
    else{return 0;}
}
int isempty(struct queue *ptr){
    if(ptr->rear==ptr->front){return 1;}
    else{return 0;}
}
void inqueue(struct queue *ptr,int val){
    if(isfull(ptr))
        printf("Queue Overflow");
    else{
        ptr->rear++;
        ptr->arr[ptr->rear]=val;
    }
}
void dequeue(struct queue *ptr){
    if(isempty(ptr)){
        printf("Queue is Uderflow");
        //return -4;
    }
    else{
        ptr->front++;
        ptr->arr[ptr->front];
    }
}
void print(struct queue *ptr){
    int i;
    for(i=ptr->front+1;i<=ptr->rear;i++){
        printf("%d  ",ptr->arr[i]);
    }
}
int main()
{
    struct queue *qu=(struct queue *)malloc(sizeof(struct queue));
    qu->size=100;
    
    qu->rear=qu->front=-1;
    qu->arr=(int *)malloc(sizeof(int)*qu->size);
  inqueue(qu,99);
  inqueue(qu,2);
  inqueue(qu,3);
  print(qu);
 dequeue(qu);
  dequeue(qu);
  dequeue(qu);
  dequeue(qu);
 printf("\n After dequeue");
 print(qu);
 free(qu);
 print(qu);
   // printf("%d",isempty(qu));
   
  //  printf("%d",qu->rear);
    return 0;
}