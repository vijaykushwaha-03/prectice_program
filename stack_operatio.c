 #include<stdio.h>
 
 #define MAX_SIZE 10
 
 int stack[MAX_SIZE];
 int top = -1;
 
 void push(int x)
 {
    if(top == MAX_SIZE -1)
    {
        printf("OVER FLOW");
    }
        
    stack[++top] = x;
 }
 
 int pop()
 {
     if(top == -1)
     {
        printf("Under Flow");
     }
      stack[top--];
 }
 
 void display()
 {
     for(int i=0; i<= top; i++)
     {
         printf("%d ",stack[i]);
     }
     printf("\n");
 }
 int main()
 {
     
     push(1);
     push(2);
     display();
     pop();
     display();
     return 0;
     
 }