//reverse the content of queue using STACK
#include <stdio.h>
int q[20],s[20],front=-1,rear=-1,TOS=-1;

void nq();
int dq();
void push();
int pop();
void show();
void rev();
int main()
{
int size,item,i;
printf("No of items in the queue: \n" );
scanf("%d",&size);
printf("Enter the elements:");
for (i=0;i<size;i++)
  {
    scanf("%d",&item);
    nq(item);
  }
  printf("The queue elements are:  " );
  show();
  printf("\n" );
  rev(size);
  printf("The queue after reversing:  ");
  show();
  printf("\n" );
  return 0;
}
void nq(int d)
  {
    if(front==-1&&rear==-1)
  {
    front=0;
    rear=0;
    q[rear]=d;
  }
  else
  {
    rear+=1;
    q[rear]=d;
  }
}

int dq()
{
  int d;
  if (front==-1&&rear==-1)
  printf("underflow");
  else
  {
    d=q[front];
    front+=1;
  }
  return d;

}
void push(int d)
{
  TOS++;
  s[TOS]=d;
}
int pop()
{
  int p=s[TOS];
  TOS--;
  return p;
}

void show()
{
  int i;
  if(front==-1&&rear==-1)
  printf("Underflow" );
  else if(front==0 && rear==0)
  printf("%d",q[0]);
  else
  {
    for (i = front; i <= rear; i++)
    {
      printf("%d\t",q[i]);

    }
  }
}
void rev(int n)
{
  int i,d;
  for(i=0;i<n;i++)
  {
    d=dq();
          push(d);
  }
  for(i=0;i<n;i++)
  {
    d=pop();
    nq(d);
  }
}
