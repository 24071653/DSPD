#include<stdio.h>
#include<stdlib.h>
#define max 5

int stack[max];
int top = -1;
int i;
int isFull(){
return top == max -1;
}

int isEmpty(){
return top == -1;
}

void push(int value){
if(isFull()){
printf("Stack overflow cannot push %d\n",value);
}
else{
top++;
stack[top] = value;
printf("value pushed\n");
}
}
int pop(){
if(isEmpty()){
printf("Stack underflow! cannot pop %d\n");
}
else{
return stack[top];
top--;
}
}
void isPalindrome() {
    char str[100];
    int i = 0, j, flag = 1;
    printf("Enter a word: ");
    scanf("%s", str);
    for (j = 0; str[j] != '\0'; j++);
    j = j - 1;
    while (i < j) {
    if (str[i] != str[j]) {
        flag = 0;
        break;
    }
    i++;
    j--;
}

    if (flag == 1)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}

void display(){
for(i = 0 ; i<top ; i++){
printf("%d\n",stack[i]);
}
}

int main(){
int n,value;
int run = 1;
char str[100];
while(run){
printf("Menu\n");
printf("1. push\n");
printf("2. pop\n");
printf("3. display\n");
printf("4.palindrome\n");
printf("5. exit\n");

printf("Enter your choice\n");
scanf("%d",&n);

switch(n){

case 1:
printf("Enter a value to push: ");
scanf("%d",&value);
push(value);
break;
case 2:
value = pop();
printf("%d",value);
break;
case 3:
display();
break;
case 4:
isPalindrome();
case 5:
run = 0;
break;
}
}
return 0;
}