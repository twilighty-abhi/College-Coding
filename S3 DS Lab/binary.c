#include <stdio.h>
#include <stdlib.h>

int main()
{

  int key,n,arr[20],a=0,t,k;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  printf("Enter the numbers \n");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
  printf("The element to search for:\n" );
  scanf("%d",&key);

//sorting the array
for(int i=0;i<n-1;i++)
for (int j=0;j<n-1;j++)
	{
	  if(arr[j]>arr[j+1])
	  	{
	  	t=arr[j];
	  	arr[j]=arr[j+1];
	  	arr[j+1]=t;
	  	}
	}

  //sorted array
  printf("The sorted array is: \n");
  for(int i=0;i<n;i++)
  printf("%d\n",arr[i] );
//binary search

int beg=0,end=n-1,mid=(beg+end)/2;
while(beg<=end && arr[mid]!=key)
{
 {
   if(k<arr[mid])
   end=mid-1;

 else
 beg=mid+1;


 }
mid=(beg+end)/2;
}
if(arr[mid]==key)
printf("Element found " );
else
printf("Element Not found " );


return 0;
}
