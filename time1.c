#include <stdio.h>
void main()
{
    int min,hr,minu,hor,i,j;
    printf("Enter the first hours and minutes\n");
    scanf("%d%d",&hr,&min);
    printf("Enter the second hours and minuters\n");
    scanf("%d%d",&hor,&minu);
    i=hr-hor;   
    j=min-minu;
    printf("%d Hours %d Minutes",i,j);
}
