#include<stdio.h>
#include<conio.h>
void main()
{
 int i,loc=0,j,n,min,arr[67],temp;
 clrscr();
 printf("enter the size of array\n");
 scanf("%d",&n);
 printf("enter the elements of array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0;i<=n-1;i++)
 {
  min=arr[i];
  loc=i;
  for(j=i+1;j<=n-1;j++)
     {
      if(min>arr[j])
       {
	min=arr[j];
	loc=j;
       }
     }
   temp=arr[i];
   arr[i]=arr[loc];
   arr[loc]=temp;
  }
printf("the sorted array\n");
for(i=0;i<n;i++)
{
 printf("%d\n",arr[i]);
 }
getch();
}



