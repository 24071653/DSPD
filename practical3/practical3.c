#include <stdio.h>
#define max 5
int rear = -1;
int front = 0;
int que[max];
int i;

void status(){
if(front ==-1){
printf("Queue overflow\n");
printf("index of front: %d\nIndex of rear : %d\n",front,rear);
}
else if(front>rear){
printf("queue underflow\n");
printf("index of front: %d\nIndex of rear : %d\n",front,rear);

}
else{
printf("queue has space\n");
printf("index of front: %d\nIndex of rear : %d\n",front,rear);

}
}


void enQ(int value){
if(rear == max -1){
printf("The queue is full\n");
}
else{

rear++;
que[rear]=value;
printf("Value Entered\n");
}
}


void deQ(){
if(front > rear){
printf("Queue is empty\n");
}
else{
printf("Value %d  is deleted from the queue\n",que[front]);
front++;
}
}


void display(){
printf("Queue is :  \n");
for(i= front; i <=rear; i++){
printf("%d\n",que[i]);
}
}


int main(){
int choice,value;
int running = 1;
while(running){
printf("MENU\n");
printf("1. Insert\n2. Delete\n3.display\n4. Status\n5.exit\n");
printf("Enter your choice\n");
scanf("%d",&choice);
switch(choice){

case 1:
printf("Enter a value to insert\n");
scanf("%d",&value);
enQ(value);
break;

case 2:
deQ();
break;
case 3:
display();
break;
case 4:
status();
break;
case 5:
running = 0;
break;
default:
printf("Enter valid choice\n");
break;
}
}





return 0;
}