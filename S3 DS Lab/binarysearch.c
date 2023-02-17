// c program to do binary search
#include <stdio.h>
int main()
{
//part to sort the inputted values

//inputting array
int a[50],element,n,t,find,k;
printf("Enter the number of elements in the array");
scanf("%d",&n);



printf("Enter the elements of the array\n");
for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
printf("Enter the element to find:");
scanf("%d",&find);
// sorting the array part

for(int i=0;i<n-1;i++)
for (int j=0;j<n-1;j++)
	{	
	  if(a[j]>a[j+1])
	  	{
	  	t=a[j];
	  	a[j]=a[j+1];
	  	a[j+1]=t;
	  	}
	}
//printing the sorted array for testing
printf("sorted array is \n");
for(int i=0;i<n;i++)
	printf("%d \t",a[i]);

// doing binary search!

printf("\nDoing bubble sort");
 int beg=0,end=n-1,mid=(beg+end)/2;
 while(beg<=end && a[mid]!=k)
 { 
	{	
		if(k<a[mid])
		end=mid-1;

	else
	beg=mid+1;


 	}
mid=(beg+end)/2;	
}
if(a[mid]==k)
	printf("Not found");
 else
	
	printf("Element found ");
return 0;
}
