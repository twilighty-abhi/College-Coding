#include <stdio.h>
void insert();
void delete();
void display();

int ch,arr[20],n,rear=-1,front=-1;
int main()
{
  printf("Enter the number of elements in queue\n");
  scanf("%d",&n);
  do{
      printf("1.Insert into queue\n2.Delete from queue\n3.Display queue\n4.Exit");
      printf("Enter your choice");
      scanf("%d",&ch);

      switch(ch)
      {
      case 1:
      {
      insert();
      break;
      }
      case 2:
      {
      delete();
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
      printf ("\nInvalid choice\n");
    }
    while(ch!=4);

  return 0;
}

void insert()
   {
        int add_item;
        if (rear == MAX - 1)
        printf("Queue Overflow \n");
        else
        {
           if (front == - 1)
            front = 0;
            printf("Inset the element in queue : ");
            scanf("%d", &add_item);
            rear = rear + 1;
            arr[rear] = add_item;
        }
   }

   void delete()
      {
          if (front == - 1 || front > rear)
          {
              printf("Queue Underflow \n");
              return ;
          }
          else
          {
              printf("Element deleted from queue is : %d\n", arr[front]);
              front = front + 1;
          }
      } /* End of delete() */

      void display()
     {
          int i;
          if (front == - 1)
              printf("Queue is empty \n");
          else
          {
              printf("Queue is : \n");
              for (i = front; i <= rear; i++)
                  printf("%d ", arr[i]);
              printf("\n");
          }
      }
