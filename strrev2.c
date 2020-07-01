#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
 {
     char str[10];
     int len;
      printf("enter a string");
     scanf("%[^\n]s",str);
     len=strlen(str);
     printf("reverse string is:");
     for(int i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    getch();

    }



