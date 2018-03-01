#include <stdio.h>
void main()
{
    int min,hr,k;
    printf("Enter the minutes\n");
    scanf("%d",&min);
    hr=min/60;
    k=min%60;
    printf("%d Hours %d Minutes",hr,k);
}
