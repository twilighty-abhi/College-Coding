
#include<stdio.h>
int stack[10],ch,n,top,x,i; // Declaration of variables

void push();
void pop();
void display();

int main()
{
 top = -1;     // Initially no element in stack
 printf("\n Enter the size of STACK : ");
 scanf("%d",&n);
 do
 {
 printf("\n1.PUSH(Insertion)\n2.POP(Deletion)\n3.DISPLAY\n4.EXIT\n");
 printf("\nEnter the ch : ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 {
 push();
 break;
 }
 case 2:
 {
 pop();
 break;
 }
 case 3:
 {
 display();
 break;
 }
 case 4:
 break;
 default:
 printf ("\nInvalid ch\n");
 }}
 while(ch!=4);
 return 0;
}

void push()
{
 if(top >= n - 1)
 {
 printf("\nSTACK OVERFLOW\n");

 }
 else
 {
 printf("Enter a value to be pushed : ");
 scanf("%d",&x);
 top++;
 stack[top] = x;
 }}

void pop()
{
 if(top <= -1)
 {
 printf("\nSTACK UNDERFLOW\n");
 }
 else
 {
 printf("\nThe popped element is %d",stack[top]);
 top--;
 display();
 }}

void display()
{
 if(top >= 0)
 {
   //  Printing the stack
 printf("\nELEMENTS IN THE STACK\n\n");
 for(i = top ; i >= 0 ; i--)
 printf("%d\t",stack[i]);
 printf("\n");
 }
 else
 {
 printf("\nEMPTY STACK\n");
 }}
