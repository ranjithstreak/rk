#include <stdio.h>
void main()
{
    int a[100],i,n;
    printf("Enter the array number\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    printf("The Numbers are %d\n",a[i]);
    printf("The median element is %d",a[n/2]);
}
