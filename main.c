#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("veuillez entrer le nombre souhait� a avoir son tableau de multiplication:");
    scanf("%d",&a);
    printf("le tableau est le suivant ");
    for(int i=0;i<10;i++){
        printf("pour %d *%d = %d \n",i,a,i*a);
    }
    return 0;
}
