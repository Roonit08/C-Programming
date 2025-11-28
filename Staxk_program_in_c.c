#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 100
struct stack{
    int items[STACKSIZE];
    int top;
};
void push(struct stack *s,int x);
int pop(struct stack *s);
void display(struct stack *s);
int peek(struct stack *s);
int main(){
    struct stack s;
    char ch ='y';
    char option;
    int x,i;
    s.top = -1;
    while (ch=='y' || ch == 'Y'){ 
        printf("\n What do you want to do?");
        printf("\n1. Push item to the stack");
        printf("\n2. pop item from the stack");
        printf("\n3. Display stack contents");
        printf("\n4. Peek top item");
        printf("\n5. Exit");
        printf("\n\nEnter your option:");
        scanf("%c",&option);
        switch (option){
            case '1':
         printf("\nEnter value to push");
         scanf("%d",&x);
         push(&s,x);
         break;
            case '2':
        i=pop(&s);
        if(i!= -1)
        printf("\n The popped item is:%d\n",i);
         break;
            case '3':
        display(&s);
        break;
            case'4':
        i=peek(&s);
        if(i != -1)
        printf("\nTop item =%d (index %d out of %d)\n",i,s.top,STACKSIZE -1);
        break;
            case '5':
        exit(0);
        default:
        printf("\nInvalid option!\n");
        }
        printf("\n Do you want to continue (y/n)?");
        scanf("%c",&ch);
    }
    return 0;
}
void push(struct stack *s, int x){
    if(s->top == STACKSIZE -1){
        printf("\nStack Overflow!\n");
    }else{
        s->top++;
        s->items[s->top]=x;
        printf("\nItem pushed:%d\n",x);
    }
}
int pop(struct stack *s){
    if ((s->top == -1)){
        printf("\nStack Underflow!\n");
        return -1;
    }else{
        int val = s->items[s->top];
        s->top--;
        return val;
    }
}
void display(struct stack *s){
    if(s->top ==-1){
        printf("\nStack is empty!\n");
    }else{
        printf("\nStack contents(top to bottom):\n");
        for(int i=s->top;i>=0;i--){
            printf("Index %d:%d\n",i,s->items[i]);
        }

    }
}
int peek(struct stack *s){
    if(s->top==-1){
        printf("\nStack is empty! Nothing to peek.\n");
        return -1;
    }
    return s->items[s->top];
}
