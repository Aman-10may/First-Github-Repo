#include <stdio.h>
#define MAX 5
int queue[MAX];
int rear=-1;
int front=-1;
void Enqueue(int value){
    if(rear==MAX-1){
    printf("Queue Overflow");
    }
   
    else {
    if(front==-1){
        front = 0;
    }
    
    rear++;
    queue[rear]=value;
    printf("Inserted: %d\n", value);
    }
}
void Dequeue(){
 if(front==-1||front>rear){
    printf("Queue Underflow");
 }   
 else {
    printf("Deleted element is :%d\n",queue[front]);
    front++;
 }
}
void Peek(){
   if(front==-1||front>rear) {
       printf("Queue is Empty");
   }
   else{
       printf("Element is :%d\n",queue[front]);
   }
}
void Display(){
  if(front==-1||front>rear){
      printf("Queue is empty");
  } 
  else{
      for(int i=front ; i<=rear ;i++){
          printf("%d\n",queue[i]);
      }
  }
}
int main() {
int choice ,value; 
while(1){
    printf("\n-----Queue Menu-----\n");
printf("\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n");
printf("Enter the choice:");
scanf("%d",&choice);
 switch(choice){
  case 1 :
  printf("Enter the value :");
  scanf("%d",&value);
  Enqueue(value);
  break;
  case 2:
  Dequeue();
  break;
  case 3:
  Peek();
  break;
  case 4 :
  Display();
  break;
  case 5:
  return 0;
  break;
  default :
  printf("Invalid choice");
  break;
 }   
}
    return 0;
}
