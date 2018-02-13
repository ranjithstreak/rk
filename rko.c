#include <stdio.h>
void main()
{
    int a[10],i,num;
    printf("Enter the array number\n");
    scanf("%d",&num);
    printf("Enter the numbers\n");
    for(i=1;i<=num;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=num;i++)
    printf("The Numbers are %d\n",a[i]);
    if(a[num]>a[num-1]&&a[num]>a[num-2])
    printf("%d is greater",a[num]);
    else
    if(a[num-1]>a[num-2]&&a[num-1]>a[num])
    printf("%d is greater",a[num-1]);
    else
    printf("%d is greater",a[num-2]);
}
