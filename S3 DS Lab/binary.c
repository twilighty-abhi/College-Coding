#include <stdio.h>
#include <stdlib.h>

int main()
{

  int key,n,arr[20],a=0;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  printf("Enter the numbers \n");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
  printf("The element to search for:\n" );
  scanf("%d",&key);


//binary search

int beg=0,end=n-1,mid=(beg+end)/2;


return 0;
}
