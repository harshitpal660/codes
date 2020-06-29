/*program of swapping without using third variable */
main()
{
    int a,b;
    printf("ENTER TWO NUMBER");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d b=%d",a,b);
    getch();
    }
