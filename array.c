#include<stdio.h>

 void main()
 {
     int a[7],i,x;
     printf("enter 7 numbers");
     for(i=0;i<=6;i++)
    {

     scanf("%d",&a[i]);
    }
    printf("the given array is");
    for(i=0;i<=6;i++)
    {

     printf("%d",a[i]);
    }
     for(i=0;i<=6;i++)
    {

     for(int j=i+1;j<=6;j++)
    {
      if(a[i]<a[j])
      {
          x=a[j];
         a[j]=a[i];
         a[i]=x;
      }

    }

    }
 printf("the sorted array is:");
for(i=0;i<=6;i++)
    {

     printf("%d \t",a[i]);
    }
    }

