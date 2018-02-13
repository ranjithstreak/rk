#include <stdio.h>
void main()
{
    int a[5],i,n;
    printf("Enter the array number\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    printf("The Numbers are %d\n",a[i]);
    if(a[n]>a[n-1]&&a[n]>a[n-2])
    printf("%d is greater",a[n]);
    else
    if(a[n-1]>a[n-2]&&a[n-1]>a[n])
    printf("%d is greater",a[n-1]);
    else
    printf("%d is greater",a[n-2]);
}
