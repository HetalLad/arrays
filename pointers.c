#include <stdio.h>
int main()
{
    int a[3][3];int i,j;
    int *p=&a[0][0];
    printf("INPUT ELEMENTS\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
        printf("element[%d][%d]-",i+1,j+1);
        scanf("%d",(p+(i*3)+j));
    }
    }
    printf("DISPLAYING ELEMENTS \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
        printf("%d \t",*(p+(i*3)+j));
    }
    printf("\n");
    
    }
    return 0;
}
