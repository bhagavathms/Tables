#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("hi1");
    int n;
    int i=1,sum=0,k;
    //printf("\nhi2");
    //printf("\n%d",n);
    //printf("\ni=%d",i);
    printf("Enter no :");
    scanf("%d",&n);
    //printf("\nn=%d",n);
    //printf("\nok");
    printf("\n");
    while (i<=10){
        //printf("\ni=%d",i);
        //printf("\n\t%d",i*n);
        k=n*i;
        printf("%dx%d=%d",n,i,k);
        sum=sum+k;
        //can also be
        //printf("%d",sum);
        //printf("%d",n,&"jj");
        //printf("x%d",i);
        //printf("=%d",n*i);
        printf("\n");
        //printf("asd");
        i=i+1;
    }
    printf("\nSum=%d",sum);
}
