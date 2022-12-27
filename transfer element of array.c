#include <stdio.h>

void main()
{
    // Write C code here
    int a[100], i,n;
    printf("enter the no of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
         
     }
    printf("the entered array is-");
    for(i=0;i<n;i++)
     {
         printf("%d",a[i]);
         
     }
}