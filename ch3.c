#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr,i,v=0;
    scanf("%d",&nbr);
    for(i=2;i<nbr;i++)
    {
        if ((nbr%i) == 0){
    printf("%d n'est pas premier",nbr);
    v++;
    }
    }
    if(v==0)
    printf("%d est premier",nbr) ;

    return 0;

}
