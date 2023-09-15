#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ligne,i,j;
    scanf("%d",&ligne);
    for(i=1;i<=(ligne*2);i+=2){
            for(j=(ligne*2)*2;j>i;j-=2){
                    printf(" ");
                    }
        for(int b=0;b<i;b++){
            printf("*");
        }
    printf("\n");
    }
    return 0;
}
