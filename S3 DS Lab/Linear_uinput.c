
#include <stdio.h>
#include <stdlib.h>
int main()
{
int key,n,arr[20],a=0;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the numbers");
for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
printf("The element to search for:\n" );
scanf("%d",&key);

//chacking for element
for(int i=0;i<n;i++)
{
  if (arr[i]==key)
    {
      printf("Element found at position %d\n",i+1 );
      exit(0) ;
    }
  else
    a=1;

}
if (a==1)
  printf("Element not found\n");

  return 0;
}
