#include <stdio.h>

void main()
{
    int a[100]={1,2,3,4,5}, i,n,l;
    printf("enter the value to be entered\n");
    scanf("%d",&n);
    printf("enter the location for the value\n");
    scanf("%d",&l);
    for(i=4;i>=l-1;i--)
     {
      
         a[i+1]=a[i];
         
     }
    a[l-1]=n;
    printf("the new array is-");
    for(i=0;i<6;i++)
     {
         printf("%d",a[i]);
         
     }
}