main()
{
    int a,i;
    printf("enter a number");
    scanf("%d",&a);
    for(i=2;i<=a-1;i++)
    if(a%i==0)
        break;
    if(i==a)
    printf("%d is a prime number",a);
    else
    printf("%d is a not prime number",a);
}
